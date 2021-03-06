$title Traveling Salesman Problem - solution via dynamic subtour elimination

$ontext

This model is takeen from tsp5 from GAMSLIB, modified to use GDX data
coming from R and to export the solution back to GDX.  We use the
dynamic subtour formulation from that model.  The following text is from the
original model tsp5.

This is the fourth problem in a series of traveling salesman
problems. Here we use a dynamic subtour elimination using even
stronger cuts than in the previous models. Also the GAMS programming
is more compact than in the previous examples.

$offtext

$if NOT set  infile $set  infile inData
$if NOT set outfile $set outfile outSol

sets
  ii 'set of cities'
  i(ii) 'city subset to construct a tour for'
  ;
parameter c(ii,ii);
$gdxin %infile%
$load ii c
$gdxin

set i(ii);
alias (ii,jj),(i,j,k);

* i(ii) = ord(ii) < 10;
i(ii) = yes;

binary variables  x(ii,jj)  decision variables - leg of trip;
free   variable   z         objective variable;

* exclude diagonal
x.fx(ii,ii) = 0;

equations objective   total cost
          rowsum(ii)  leave each city only once
          colsum(jj)  arrive at each city only once
          ;
* the assignment problem is a relaxation of the TSP

objective.. z =e= sum((i,j), c(i,j)*x(i,j));

rowsum(i).. sum(j, x(i,j)) =e= 1;
colsum(j).. sum(i, x(i,j)) =e= 1;


* Dynamic subtour elimination
Set  ste           possible subtour elimination cuts / c1*c1000 /
     a(ste)        active cuts
     tour(ii,jj)   possible subtour
     n(jj)         nodes visited by subtour
Parameter
     continue      indicator to continue to eliminate subtours /1/
     cc(ste,ii,jj) cut coefficients
     rhs(ste)      right hand side of cut;
Equation
     defste(ste)   Subtour elimination cut;

defste(a).. sum((i,j), cc(a,i,j)*x(i,j)) =l= rhs(a);

model DSE / rowsum, colsum, objective, defste /;
DSE.threads = -1;
option optcr=0;

a(ste)=no; cc(a,i,j)=0; rhs(a)=0;
option limrow=0, limcol=0, solprint=silent, solvelink=5;
loop(ste$continue,
  if (continue=1,
     solve DSE min z using mip;
     abort$(DSE.modelstat <> %modelstat.Optimal%) 'problems with MIP solver';
     x.l(i,j) = round(x.l(i,j));
     continue=2);
* Check for subtours
  tour(i,j)=no; n(j)=no;
  loop((i,j)$(card(n)=0 and x.l(i,j)), n(i)=yes);
* Found all subtours, resolve with new cuts
  if (card(n)=0,
     continue=1;
  else
* Construct a single subtour and remove it by setting x.l=0 for its edges
     while(sum((n,j), x.l(n,j)),
        loop((i,j)$(n(i) and x.l(i,j)),
           tour(i,j) = yes; x.l(i,j) = 0; n(j)=yes));
     if (card(n)<card(j),
        a(ste)   = 1;
        rhs(ste) = card(n)-1;
        cc(ste,i,j)$(n(i) and n(j)) = 1;
     else
        continue=0)));

scalars modelstat, solvestat;

modelstat = DSE.modelstat;
solvestat = DSE.solvestat;
execute_unload '%outfile%', modelstat, solvestat, ii, tour;

if (continue=0,
   display 'Optimal tour found', tour;
else
   abort 'Out of subtour cuts, enlarge set ste');

### Test rgdx on all the transport data using full reads and no filter
### N.B.  This test depends on the domain info in the GDX file
### wanted lists produced with    dump("listName",file="")

if (! require(gdxrrwMIRO))      stop ("gdxrrw package is not available")
if (0 == igdx(silent=TRUE)) stop ("the gdx shared library has not been loaded")

source ("chkSame.R")
reqIdent <- TRUE

iUels <- c("seattle", "san-diego")
iCard <- length(iUels)
jUels <- c("new-york", "chicago", "topeka")
jCard <- length(jUels)
uUels <- c(iUels, jUels)
uCard <- length(uUels)

iVals <- matrix(0, nrow=uCard, ncol=1, dimnames=list('*'=uUels)) ; iVals[iUels,1] <- 1
jVals <- matrix(0, nrow=uCard, ncol=1, dimnames=list('*'=uUels)) ; jVals[jUels,1] <- 1
aVals <- matrix(c(350,600), nrow=iCard, ncol=1, dimnames=list('i'=iUels,NULL))
bVals <- matrix(c(325,300,275), nrow=jCard, ncol=1, dimnames=list('j'=jUels,NULL))

dVals <- matrix(c(2.5, 1.7, 1.8,
                  2.5, 1.8, 1.4), nrow=iCard, ncol=jCard,
                dimnames=list('i'=iUels,'j'=jUels), byrow=TRUE)
cVals <- dVals * 90 / 1000


tryCatch({
  fn <- "trnsport.gdx"
  print ("Test rgdx with form='full' and no filter,")
  print ("using the transport data as the input")
  rgdx('?')

  u <- rgdx('trnsport')
  uwant <- list(name="*", type="set", dim=1L,
                val=NULL,
                form=NULL,
                uels=uUels)
  chk <- chkRgdxRes (u, uwant, reqIdent=reqIdent)
  if (!chk$same) {
    stop (paste("test rgdx('gdxname') to read universe failed",chk$msg))
  }
  print ("Done reading universe")

  i <- rgdx('trnsport',list(name='i',form='full'))
  iwant <- list(name="i", type="set", dim=1L,
                val=iVals,
                form="full",
                uels=list('*'=uUels),
                domains=c("*"),
                domInfo="none")
  chk <- chkRgdxRes (i, iwant, reqIdent=reqIdent)
  if (!chk$same) {
    stop (paste("test rgdx(i,form=full) failed:",chk$msg))
  }
  print ("Done reading set i")

  j <- rgdx('trnsport',list(name='j',form='full'))
  jwant <- list(name="j", type="set", dim=1L,
                val=jVals,
                form="full",
                uels=list('*'=uUels),
                domains=c("*"),
                domInfo="none")
  chk <- chkRgdxRes (j, jwant, reqIdent=reqIdent)
  if (!chk$same) {
    stop (paste("test rgdx(j,form=full) failed:",chk$msg))
  }
  print ("Done reading set j")

  f <- rgdx('trnsport',list(name='f',form='full'))
  fwant <- list(name="f", type="parameter", dim=0L,
                val=90,
                form="full",
                uels=list(),
                domains=character(0),
                domInfo="NA")
  chk <- chkRgdxRes (f, fwant, reqIdent=reqIdent)
  if (!chk$same) {
    stop (paste("test rgdx(f,form=full) failed:",chk$msg))
  }
  print ("Done reading scalar f")

  a <- rgdx('trnsport',list(name='a',form='full'))
  awant <- list(name="a", type="parameter", dim=1L,
                val=aVals,
                form="full",
                uels=list('i'=iUels),
                domains=c("i"),
                domInfo="full")
  chk <- chkRgdxRes (a, awant, reqIdent=reqIdent)
  if (!chk$same) {
    stop (paste("test rgdx(a,form='full') failed:",chk$msg))
  }
  print ("Done reading parameter a")

  b <- rgdx('trnsport',list(name='b',form='full'))
  bwant <- list(name="b", type="parameter", dim=1L,
                val=bVals,
                form="full",
                uels=list('j'=jUels),
                domains=c('j'),
                domInfo="full")
  chk <- chkRgdxRes (b, bwant, reqIdent=reqIdent)
  if (!chk$same) {
    stop (paste("test rgdx(b,form='full') failed:",chk$msg))
  }
  print ("Done reading parameter b")

  c <- rgdx('trnsport',list(name='c',form='full'))
  cwant <- list(name="c", type="parameter", dim=2L,
                val=cVals,
                form="full",
                uels=list('i'=iUels,'j'=jUels),
                domains=c("i","j"),
                domInfo="full")
  chk <- chkRgdxRes (c, cwant, reqIdent=F)
  if (!chk$same) {
    stop (paste("test rgdx(c,form='full') failed:",chk$msg))
  }
  print ("Done reading parameter c")


  print ("Successfully completed tests")
  TRUE   ## all tests passed: return TRUE
}

, error = function(ex) { print(ex) ; FALSE }
)

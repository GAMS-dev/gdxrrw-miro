### Test rgdx.param
# we read the distance matrix from the eurodist data set
# previously stored in a GDX file and compare that to the eurodist data

if (! require(gdxrrwMIRO))      stop ("gdxrrw package is not available")
if (0 == igdx(silent=TRUE)) stop ("the gdx shared library has not been loaded")

tryCatch({
  gdxName <- "euroDistTest"
  symName <- "dist"
  df <- rgdx.param(gdxName,symName)
  df3 <- rgdx.param(gdxName,symName,names=c("from","to","distance"))

  n <- attr(eurodist,"Size")
  cities <- attr(eurodist,"Labels")
  dm <- as.matrix(eurodist)

  k <- 0
  doPrint <- TRUE;
  for (i in c(1:n)) {
    for (j in c(1:n)) {
      if (dm[i,j] > 0) {
        k <- k + 1
        if (doPrint) {
          print (paste("checking eurodist:", i, j, cities[i], cities[j], dm[i,j]))
          print (paste("              df3:", as.numeric(df3$from[k]), as.numeric(df3$to[k]), as.character(df3$from[k]), as.character(df3$to[k]), df3$distance[k]))
          if (k > 10) {
            print ("Further output suppressed")
            doPrint <- FALSE;
          }
        }
        if (i != as.numeric(df3$from[k])) {
          stop ("mismatch in i")
        }
        if (j != as.numeric(df3$to[k])) {
          stop ("mismatch in j")
        }
        if (cities[i] != as.character(df3$from[k])) {
          stop ("mismatch in cities[i]")
        }
        if (cities[j] != as.character(df3$to[k])) {
          stop ("mismatch in cities[j]")
        }
        if (dm[i,j] != df3$distance[k]) {
          stop ("mismatch in distance[k]")
        }
      }
    }
  }

  print ("All tests for rgdx.param passed");
  TRUE
}

, error = function(ex) { print(ex) ; FALSE }
)

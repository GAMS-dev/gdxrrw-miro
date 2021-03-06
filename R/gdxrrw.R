
rgdx <- function(gdxName, requestList = NULL, squeeze=TRUE, useDomInfo=TRUE,
                 followAlias=TRUE)
{
  if (is.null(requestList) && (gdxName == '?')) {
    invisible(.External(rgdxExt, gdxName=gdxName, requestList=NULL,
                        squeeze=squeeze, useDomInfo=useDomInfo,
                        followAlias=followAlias))
  }
  else {
    .External(rgdxExt, gdxName=gdxName, requestList=requestList,
              squeeze=squeeze, useDomInfo=useDomInfo,
              followAlias=followAlias)
  }
}

wgdx <- function(gdxName, ..., squeeze='y')
{
  invisible(.External(wgdxExt, gdxName=gdxName, ..., squeeze=squeeze))
}

gdxInfo <- function(gdxName = NULL, dump=TRUE, returnList=FALSE, returnDF=FALSE)
{
  d <- as.logical(dump)
  if (is.na(d)) {
    stop ("gdxInfo: argument dump=", print(dump), " not a good logical value")
  }
  rl <- as.logical(returnList)
  if (is.na(rl)) {
    stop ("gdxInfo: argument returnList=", print(returnList), " not a good logical value")
  }
  rdf <- as.logical(returnDF)
  if (is.na(rdf)) {
    stop ("gdxInfo: argument returnDF=", print(returnDF), " not a good logical value")
  }
#  print (paste('gdxInfo: dump=',d,'returnList=',rl,'returnDF=',rdf))
  if (! (rl || rdf)) {
    invisible(.External(gdxInfoExt, gdxName=gdxName, dump=d, returnList=rl,
                        returnDF=rdf))
  }
  else {
    .External(gdxInfoExt, gdxName=gdxName, dump=d, returnList=rl,
              returnDF=rdf)
  }
} # gdxInfo

igdx <- function(gamsSysDir = NULL, silent = FALSE, returnStr = FALSE)
{
  invisible(.External(igdxExt, gamsSysDir, silent=silent, returnStr=returnStr))
}

# typeCode constants for variables
GMS_VARTYPE <- list(UNKNOWN=0L,
                    BINARY=1L,
                    INTEGER=2L,
                    POSITIVE=3L,
                    NEGATIVE=4L,
                    FREE=5L,
                    SOS1=6L,
                    SOS2=7L,
                    SEMICONT=8L,
                    SEMIINT=9L,
                    MAX=10L)

# typeCode constants for equations
GMS_EQUTYPE <- list(E=0L,
                    G=1L,
                    L=2L,
                    N=3L,
                    X=4L,
                    C=5L,
                    MAX=6L)

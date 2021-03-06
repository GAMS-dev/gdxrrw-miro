### Test rgdx, rgdx.param with special values and zero
# We read a parameter containing special values and test the results

if (! require(gdxrrwMIRO))      stop ("gdxrrw package is not available")
if (0 == igdx(silent=TRUE)) stop ("the gdx shared library has not been loaded")

tryCatch({
  print ("test reading special values with form='sparse' and no filter")
  rgdx('?')

  fn <- "svxls.gdx"

  print (paste("first read with defaults: input =",fn))
  sv1 <- rgdx (fn,list(name='sv'))

  print (paste("second read with squeeze=FALSE: input =",fn))
  sv2 <- rgdx (fn,list(name='sv'),squeeze=FALSE)

  print (paste("third read as data frame with default squeeze: input =",fn))
  svdf3 <- rgdx.param (fn, 'sv', ts=TRUE)

  print (paste("fourth read as data frame with squeeze=FALSE: input =",fn))
  svdf4 <- rgdx.param (fn, 'sv', ts=TRUE, squeeze=FALSE)

  if (dim(sv1$val)[1] != 15)
    stop ("Expected dim(sv1$val)[1] to be 15")
  if (dim(sv1$val)[2] != 3)
    stop ("Expected dim(sv1$val)[1] to be 3")
  if (! is.nan(sv1$val[12,3]))
    stop ("Expected sv1$val[12,3] to be NaN")
  if (! is.na(sv1$val[13,3]))
    stop ("Expected sv1$val[13,3] to be NA")
  if (! is.infinite(sv1$val[14,3]))
    stop ("Expected sv1$val[14,3] to be infinite")
  if (sv1$val[14,3] <= 0)
    stop ("Expected sv1$val[14,3] to be positive")
  if (! is.infinite(sv1$val[15,3]))
    stop ("Expected sv1$val[15,3] to be infinite")
  if (sv1$val[15,3] >= 0)
    stop ("Expected sv1$val[15,3] to be negative")

  if (dim(sv2$val)[1] != 17)
    stop ("Expected dim(sv2$val)[1] to be 17")
  if (dim(sv2$val)[2] != 3)
    stop ("Expected dim(sv2$val)[1] to be 3")
  if (0 != sv2$val[12,3])
    stop ("Expected sv2$val[12,3] to be 0")
  if (! is.nan(sv2$val[13,3]))
    stop ("Expected sv2$val[13,3] to be NaN")
  if (! is.na(sv2$val[14,3]))
    stop ("Expected sv2$val[14,3] to be NA")
  if (! is.infinite(sv2$val[15,3]))
    stop ("Expected sv2$val[15,3] to be infinite")
  if (sv2$val[15,3] <= 0)
    stop ("Expected sv2$val[15,3] to be positive")
  if (! is.infinite(sv2$val[16,3]))
    stop ("Expected sv2$val[16,3] to be infinite")
  if (sv2$val[16,3] >= 0)
    stop ("Expected sv2$val[16,3] to be negative")
  if (0 != sv2$val[17,3])
    stop ("Expected sv2$val[17,3] to be 0")

  # test data frame returns with squeezed zero
  if (dim(svdf3)[1] != 15)
    stop ("Expected dim(svdf3)[1] to be 15")
  if (dim(svdf3)[2] != 3)
    stop ("Expected dim(svdf3)[1] to be 3")
  if (! is.nan(svdf3[12,'value']))
    stop ("Expected svdf3[12,'value'] to be NaN")
  if (! is.na(svdf3[13,'value']))
    stop ("Expected svdf3[13,'value'] to be NA")
  if (! is.infinite(svdf3[14,'value']))
    stop ("Expected svdf3[14,'value'] to be infinite")
  if (svdf3[14,'value'] <= 0)
    stop ("Expected svdf3[14,'value'] to be positive")
  if (! is.infinite(svdf3[15,'value']))
    stop ("Expected svdf3[15,'value'] to be infinite")
  if (svdf3[15,'value'] >= 0)
    stop ("Expected svdf3[15,'value'] to be negative")

  if (dim(svdf4)[1] != 17)
    stop ("Expected dim(svdf4)[1] to be 17")
  if (dim(svdf4)[2] != 3)
    stop ("Expected dim(svdf4)[1] to be 3")
  if (0 != svdf4[12,'value'])
    stop ("Expected svdf4[12,'value'] to be 0")
  if (! is.nan(svdf4[13,'value']))
    stop ("Expected svdf4[13,'value'] to be NaN")
  if (! is.na(svdf4[14,'value']))
    stop ("Expected svdf4[14,'value'] to be NA")
  if (! is.infinite(svdf4[15,'value']))
    stop ("Expected svdf4[15,'value'] to be infinite")
  if (svdf4[15,'value'] <= 0)
    stop ("Expected svdf4[15,'value'] to be positive")
  if (! is.infinite(svdf4[16,'value']))
    stop ("Expected svdf4[16,'value'] to be infinite")
  if (svdf4[16,'value'] >= 0)
    stop ("Expected svdf4[16,'value'] to be negative")
  if (0 != svdf4[17,'value'])
    stop ("Expected svdf4[17,'value'] to be 0")

  print ("all tests for reading special values and zero passed")
  TRUE
}

, error = function(ex) { print(ex) ; FALSE }
)

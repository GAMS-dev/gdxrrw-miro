# -*- makefile -*-

P3UNITS =  \
  gdxdclib.OBJ \
  p3platform.OBJ \
  p3utils.OBJ \
  p3process.OBJ \
  p3library.OBJ \
  p3ieeefp.OBJ \
  p3threads.OBJ \
  system_p3.OBJ \
  sysutils_p3.OBJ \
  math_p3.OBJ \
  idglobal_p3.OBJ \
  gmsgen.OBJ \
  pchutil.OBJ \
  gxfile.OBJ \
  gxdefs.OBJ \
  p3private.OBJ \
  gmsspecs.OBJ \
  gmsglob.OBJ \
  strutilx.OBJ \
  gmsobj.OBJ \
  gmsdata.OBJ \
  gmsstrm.OBJ \
  strhash.OBJ \
  datastorage.OBJ \
  gdlaudit.OBJ \
  runner.OBJ \
  clibtypes.OBJ \
  xcompress.OBJ \
  gmsheapnew.OBJ \
  paldoorg.OBJ \
  gmslibname.OBJ \
  gmsglobx.OBJ

ifeq ($(OS),Windows_NT)
	UNAME  =Win64_EMT_ipp
	TARGET =gdxdclib64
else
	detected_OS := $(shell uname)
	TARGET =libgdxdclib64
	ifeq ($(detected_OS),Linux)
		UNAME =Linux86_64_gpp
	else
		UNAME =Darwin-x64-gpp
	endif
endif

DASHG  =false
TYP    =LIB
NDIR   =/home/sdirkse/devel/master-buildroot/btree/gdxio/leg/./p3units
EDIR   =.
P3SYS  =.

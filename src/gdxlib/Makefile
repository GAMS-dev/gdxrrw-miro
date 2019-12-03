# -*- makefile -*-
#
#  The include below defines (some of these not used):
#	TARGET  stem name of target program (no path or extension)
#	UNAME	determines OS, platform, compiler, 32-or-64 bit
#	P3UNITS List of files to compile/link (given as .OBJ)
#	EDIR:	Where to put the executable or shared object
include gdxdclib.mak

# UNAME = Linux86_64_gpp

CFLAGS  =
COMPFLAGS = # flags only for compiles, not for loading/dll creation

ifeq ($(UNAME), Win32-vc9)
  UNAME = Windows-i386-vc9
endif
ifeq ($(UNAME), Win32-vp9)
  UNAME = Windows-i386-vp9
endif
ifeq ($(UNAME), Windows-i386-vc9)
  CC = cl
  COMPFLAGS += -TC
  UNAME2 = Windows-i386-vc9
endif
ifeq ($(UNAME), Windows-i386-vp9)
  CC = cl
  COMPFLAGS += -TP
  UNAME2 = Windows-i386-vc9
endif

ifeq ($(UNAME2), Windows-i386-vc9)
  # Win32, MS Visual C/C++, Visual Studio 2008 aka VC9 or higher
  CFLAGS  += -I. -nologo -DP3DOS -EHsc #-MD
  CFLAGS  += -D_CRT_SECURE_NO_WARNINGS -D_CRT_DISABLE_PERFCRIT_LOCKS -DPSAPI_VERSION=1
  ifeq ($(DASHG), true)
    CFLAGS += -Z7
  else
    ifeq ($(DASHG), trueOpt)
      CFLAGS += -Z7 -O2
    else
      CFLAGS += -O2
    endif
  endif
  UNITOBJS = $(P3UNITS:.OBJ=.obj)

  OBJS = $(UNITOBJS) p3io_dll.obj p3Custom2.obj dtoaLoc.obj
  DOBJECTS=$(subst /,\\,$(OBJS))

$(TARGET).dll: $(OBJS)
	$(CC) -LD $(CFLAGS) $(DOBJECTS) ws2_32.lib user32.lib advapi32.lib iphlpapi.lib Psapi.lib -Fe"$(EDIR)/$(TARGET).dll" -link -def:$(TARGET).def
p3io_dll.obj: p3io.c
	$(CC) -c $(CFLAGS) $(COMPFLAGS) -D_P3_LIBRARY $< -Fo$@

%.obj: %.c
	$(CC) -c $(CFLAGS) $(COMPFLAGS) $<

endif  # End Windows-i386-vc9


ifeq ($(UNAME), Win64_EMT)	# default to Intel compiler, C++
  UNAME = Win64_EMT_ipp
endif
ifeq ($(UNAME), Win64_EMT_icc)
  CC     = icl.exe -TC
  UNAME2 = Win64_EMT_Intel
endif
ifeq ($(UNAME), Win64_EMT_ipp)
  CC     = icl -TP
  UNAME2 = Win64_EMT_Intel
endif
ifeq ($(UNAME), Win32_EMT)
  CC     = icl -TP
  UNAME2 = Win32_EMT_Intel
endif

ifeq ($(UNAME2), Win64_EMT_Intel)
# CC set above
CFLAGS  += -I. -Qftz- -nologo -DP3DOS -EHsc #-MD
CFLAGS  += -D_CRT_SECURE_NO_WARNINGS -D_CRT_DISABLE_PERFCRIT_LOCKS -DPSAPI_VERSION=1
ifeq ($(DASHG), true)
  CFLAGS += -Z7
else
  ifeq ($(DASHG), trueOpt)
    CFLAGS += -Z7 -O2
  else
    CFLAGS += -O2
  endif
endif
UNITOBJS = $(P3UNITS:.OBJ=.obj)

OBJS = $(UNITOBJS) p3io_dll.obj p3Custom2.obj dtoaLoc.obj
DOBJECTS = $(subst /,\\,$(OBJS))  # backslashes to forward slashes

$(TARGET).dll: $(OBJS)
	$(CC) -LD $(CFLAGS) $(DOBJECTS) ws2_32.lib user32.lib advapi32.lib iphlpapi.lib Psapi.lib -Fe"$(EDIR)/$(TARGET).dll" -link -def:$(TARGET).def
p3io_dll.obj: p3io.c
	$(CC) -c $(CFLAGS) $(COMPFLAGS) -D_P3_LIBRARY $< -Fo$@

%.obj: %.c
	$(CC) -c $(CFLAGS) $(COMPFLAGS) $<

endif  # Win64_EMT_Intel


ifeq ($(UNAME), Linux86_64)         # default is gcc
UNAME = Linux86_64_gpp
endif
ifeq ($(UNAME), Linux86_64_gcc)
CC     = gcc
UNAME2 = Linux86_64_gnu
endif
ifeq ($(UNAME), Linux86_64_gpp)
CC     = g++
UNAME2 = Linux86_64_gnu
endif

ifeq ($(UNAME2), Linux86_64_gnu)
# CC set above
CFLAGS  = -I. -fPIC -m64
CFLAGS += -D_XOPEN_SOURCE=700 -D_XOPEN_SOURCE_EXTENDED=1
CFLAGS += -std=c++11
CFLAGS += -fwrapv
CFLAGS += -w
# CFLAGS += -Wall
# CFLAGS += -Wno-dangling-else
# CFLAGS += -Wno-unused-function
# CFLAGS += -Wno-unused-variable
# CFLAGS += -Wno-unused-but-set-variable
# CFLAGS += -Wno-unused-value
# CFLAGS += -Wno-unused-local-typedefs
# CFLAGS += -Wno-parentheses
CFLAGS += -pthread
ifeq ($(DASHG), true)
CFLAGS += -g
else
# P3 code is not generated/written to satisfy strict aliasing assumptions,
# so -fno-strict-aliasing is appropriate (and always safer/slower)
CFLAGS += -O3 -fno-strict-aliasing
# CFLAGS += -O3
endif
SHLIBFLAGS  =
# SHLIBFLAGS += -nostartfiles
SHLIBFLAGS += -shared -Wl,-Bsymbolic -pthread
SHLIBFLAGS += -Wl,-rpath,\$$ORIGIN
SHLIBFLAGS += -fPIC
ifeq ($(DASHG), true)
SHLIBFLAGS += -g
endif
UNITOBJS = $(P3UNITS:.OBJ=.o)

OBJS = $(UNITOBJS) p3io_dll.o p3Custom2.o dtoaLoc.o
$(TARGET).so: $(OBJS)
	$(CC) $(SHLIBFLAGS) $(OBJS) -o "$(EDIR)/$(TARGET).so" -m64 -lm -ldl
p3io_dll.o: p3io.c
	$(CC) -c $(CFLAGS) -D_P3_LIBRARY -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

endif  # Linux86_64_gnu


AIX_BS =
ifeq ($(UNAME), AIX)
UNAME = AIX64_xlC
endif
ifeq ($(UNAME), AIX64_xlc)
CC     = xlc_r
OMODE  = 64
UNAME2 = AIX
endif
ifeq ($(UNAME), AIX64_xlC)
CC     = xlC_r
AIX_BS = -qsourcetype=c++ -qeh -qrtti=dynamiccast
OMODE  = 64
UNAME2 = AIX
endif

ifeq ($(UNAME2), AIX)     # AIX, in either 32- or 64-bit mode
# CC set above
CFLAGS += -I. -DAIX -q64
ifeq ($(DASHG), true)
CFLAGS += -g -O0
else
CFLAGS += -O2
endif
CFLAGS += $(AIX_BS)
CFLAGS += -qstrict
CFLAGS += -qtls
CFLAGS += -qalias=noansi
CFLAGS += -qmaxmem=10000
CFLAGS += -D_XOPEN_SOURCE=600 -D_ALL_SOURCE
# SPD, 3 Jun 2011: be sure to use -qalias=noansi, our P3 code requires this!
# SV, 6 Aug 2014: add _XOPEN_SOURCE=600 and _ALL_SOURCE so we have a fixed C standard
#CFLAGS += -qextchk -bloadmap:LOAD -v
# Use -bexpall to export all (?) symbols from library.
SHLIBFLAGS  = -G
SHLIBFLAGS += -q64
SHLIBFLAGS += -brtl -bnoentry -bernotok
SHLIBFLAGS += -binitfini:_init:_fini
SHLIBFLAGS += -b64
UNITOBJS = $(P3UNITS:.OBJ=.o)

OBJS = $(UNITOBJS) p3io_dll.o p3Custom2.o dtoaLoc.o
$(TARGET).so: $(OBJS)
	$(CC) $(SHLIBFLAGS) $(OBJS) -o "$(EDIR)/$(TARGET).so" -lm -ldl
p3io_dll.o: p3io.c
	$(CC) -c $(CFLAGS) -D_P3_LIBRARY -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

endif  # AIX


ifeq ($(UNAME), SunOS-sparc64)
UNAME = SunOS-sparc64-sunpp
endif
ifeq ($(UNAME), SunOS-sparc64-suncc)
CC     = cc
UNAME2 = SunOS-sparc-sun
endif
ifeq ($(UNAME), SunOS-sparc64-sunpp)
CC     = CC
UNAME2 = SunOS-sparc-sun
endif


ifeq ($(UNAME2), SunOS-sparc-sun)
# CC set above
CFLAGS = -I. -DSOL -xmemalign=8s -xcode=pic32
# CFLAGS += -D_XOPEN_SOURCE=500 -D_XOPEN_SOURCE_EXTENDED=1
CFLAGS += -D__EXTENSIONS__
ifeq ($(DASHG), true)
  CFLAGS += -g -xO1
else
  CFLAGS += -xO5
endif
# force libm to return IEEE 754 values for math routines in exceptional cases
CFLAGS += -xlibmieee
CFLAGS += -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64
CFLAGS += -m64
CFLAGS += -mt
# -xldscope={global,symbolic,hidden}: global is default, avoid that
CFLAGS += -xldscope=symbolic
SHLIBFLAGS  = -G
# do not use -Bsymbolic: bad for C++ libraries!!!  use -xldscope on compile instead
# SHLIBFLAGS += -Bsymbolic
SHLIBFLAGS += -m64
ifeq ($(DASHG), true)
  SHLIBFLAGS += -g
endif
SHLIBFLAGS += -z text -z defs
SHLIBFLAGS += -z initarray=P3_sol_initFunc
SHLIBFLAGS += -z finiarray=P3_sol_finiFunc
SHLIBFLAGS += -Wl,-rpath,\$$ORIGIN
SHLIBS  =
SHLIBS += -xlibmieee -mt -lm -ldl -lsocket -lnsl -lrt
ifeq ($(CC), CC)
  SHLIBS += -lCstd -lCrun
endif
SHLIBS += -lc
UNITOBJS = $(P3UNITS:.OBJ=.o)

OBJS = $(UNITOBJS) p3io_dll.o p3Custom.o p3Custom2.o dtoaLoc.o
$(TARGET).so: $(OBJS)
	$(CC) $(SHLIBFLAGS) $(OBJS) -o "$(EDIR)/$(TARGET).so" $(SHLIBS)
p3io_dll.o: p3io.c
	$(CC) -c $(CFLAGS) -D_P3_LIBRARY -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

endif  # SunOS, Sparc chip


ifeq ($(UNAME), Darwin-x64)
UNAME = Darwin-x64-gpp
endif
ifeq ($(UNAME), Darwin-x64-gcc)
CC     = gcc
UNAME2 = Darwin-x64-gnu
endif
ifeq ($(UNAME), Darwin-x64-gpp)
CC     = g++
UNAME2 = Darwin-x64-gnu
endif


ifeq ($(UNAME2), Darwin-x64-gnu)
# CC set above
CFLAGS	= -fPIC -w -m64
CFLAGS += -D_XOPEN_SOURCE=1 -D_XOPEN_SOURCE_EXTENDED=1
CFLAGS += -std=c++11
CFLAGS += -fwrapv
CFLAGS += -pthread
LDFLAGS =
ifeq ($(DASHG), true)
LDFLAGS += -g
CFLAGS += -g
else
CFLAGS += -O3 -fno-strict-aliasing
endif
SHLIBFLAGS  = -shared
SHLIBFLAGS += -pthread
SHLIBFLAGS += -install_name @rpath/$(TARGET).dylib -Wl,-rpath,@loader_path/.
SHLIBFLAGS += -headerpad_max_install_names
UNITOBJS = $(P3UNITS:.OBJ=.o)
SYSLIBSINDISTRIB = libgcc_s.1 libstdc++.6 libgfortran.3 libgmp.10 libgomp.1 libcilkrts.5 libquadmath.0 libz.1.dylib libobjc.A.dylib libc++abi.dylib
INSTALLNAMEFLAGS  = $(foreach myfile,$(SYSLIBSINDISTRIB), -change /usr/lib/$(myfile).dylib @rpath/$(myfile).dylib)
INSTALLNAMEFLAGS += $(foreach myfile,$(SYSLIBSINDISTRIB), -change $(SYSLIBDIR)/$(myfile).dylib @rpath/$(myfile).dylib)

OBJS = $(UNITOBJS) p3io_dll.o p3Custom2.o dtoaLoc.o
$(TARGET).dylib: $(OBJS)
	$(CC) -dynamiclib $(OBJS) -o "$(EDIR)/$(TARGET).dylib" -m64 $(SHLIBFLAGS)
	install_name_tool $(INSTALLNAMEFLAGS) "$(EDIR)/$(TARGET).dylib"
p3io_dll.o: p3io.c
	$(CC) -c $(CFLAGS) -D_P3_LIBRARY -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

endif  # Darwin-x64-gnu

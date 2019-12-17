if xintel==x%1 goto intel
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"
goto cont
:intel
call "C:\Program Files (x86)\IntelSWTools\compilers_and_libraries_2018.6.287\windows\bin\ipsxe-comp-vars.bat" intel64 vs2017 
:cont
cd gdxlib 
echo "UNAME = %UNAME%"
echo "MAKEFLAGS = %MAKEFLAGS%" 
make

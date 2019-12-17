call "C:\Program Files (x86)\IntelSWTools\compilers_and_libraries_2018.6.287\windows\bin\ipsxe-comp-vars.bat" intel64 vs2017 
cd gdxlib 
echo "MAKEFLAGS = $(MAKEFLAGS)" 
make

@echo off
title Sanity checker
g++ --help
echo       -    
timeout 2
echo if you see any errors then MinGw Compiler is not installed in enviroment variables or it is undetectable...
echo ....................................................................
echo        - 
echo Sanity check done!
PAUSE

@echo off
setlocal

cmake -B build -G "MinGW Makefiles" -DCMAKE_MAKE_PROGRAM=make
if %errorlevel% neq 0 exit /b %errorlevel%

cmake --build build -j
if %errorlevel% neq 0 exit /b %errorlevel%

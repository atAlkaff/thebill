@echo off
call build.bat
pushd ..\data
..\build\thebill.exe
popd
@echo off

pushd %~dp0
set app=


for /r %%i in (*borpak.exe) do set "app=%%i"

for /r %%i in (*.pak) do (
    echo �Ƿ�Ҫ��ѹ��"%app%" "%%i"  && pause >nul && "%app%" "%%i"
    type null > "%%i"

)







exit

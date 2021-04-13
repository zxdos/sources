@echo off

    if exist "bootstrap.obj" del "bootstrap.obj"
    if exist "bootstrap.com" del "bootstrap.com"
    if exist "bootstrap.coe" del "bootstrap.coe"

    c:\masm\masm615\bin\ml /AT /c /Fl bootstrap.asm
    if errorlevel 1 (color 47 & echo Assembly error & goto TheEnd)

    c:\masm\masm615\bin\link /TINY bootstrap,bootstrap.com,,,,
    if errorlevel 1 (color 47 & echo Link error & goto TheEnd)

    bootstrap2coe.exe > Cache_bootload.coe
    if errorlevel 1 (color 47 & echo bootstrap2coe error & goto TheEnd)

    dir "bootstrap.*"
    goto TheEnd

  :TheEnd

pause

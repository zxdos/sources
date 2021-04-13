@echo off

    set NAME=BIOS_N~1

    if exist "%NAME%.obj" del "%NAME%.obj"
    if exist "%NAME%.com" del "%NAME%.com"
    if exist "%NAME%.coe" del "%NAME%.coe"

    c:\masm611\bin\ml /AT /c /Fl %NAME%.asm
    if errorlevel 1 (color 47 & echo Assembly error & goto TheEnd)

    c:\masm611\bin\link /TINY %NAME%,%NAME%.com,,,,
    if errorlevel 1 (color 47 & echo Link error & goto TheEnd)

    REM bootstrap2coe.exe > Cache_bootload.coe
    REM if errorlevel 1 (color 47 & echo bootstrap2coe error & goto TheEnd)

    dir "%NAME%.*"
    goto TheEnd

  :TheEnd

pause

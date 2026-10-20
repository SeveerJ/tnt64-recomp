@echo off
rem Makes a stand-alone copy of The New Tetris: Recompiled that starts with a double-click,
rem plus a desktop shortcut with the TNT icon. Run it again after a rebuild to update the copy;
rem saves and the stored ROM in the copy are never overwritten.
setlocal
set "SRC=%~dp0out\build\windows"
set "DST=%~dp0..\TNT Recompiled"
if not exist "%SRC%\TNTRecompiled.exe" (
    echo TNTRecompiled.exe not found in %SRC% - build the game first with run_build.bat.
    pause
    exit /b 1
)
if not exist "%DST%" mkdir "%DST%"
echo Copying the game to "%DST%" ...
for %%F in (TNTRecompiled.exe SDL2.dll dxcompiler.dll dxil.dll) do copy /y "%SRC%\%%F" "%DST%\" >nul
copy /y "%~dp0tnt.ico" "%DST%\tnt.ico" >nul
if exist "%SRC%\settings.ini" if not exist "%DST%\settings.ini" copy "%SRC%\settings.ini" "%DST%\" >nul
rem The stored ROM and saves: copy only files the copy doesn't have yet.
robocopy "%SRC%\tnt_data" "%DST%\tnt_data" /E /XC /XN /XO /NFL /NDL /NJH /NJS /NP >nul
echo Creating the desktop shortcut ...
powershell -NoProfile -ExecutionPolicy Bypass -Command ^
  "$d = [Environment]::GetFolderPath('Desktop'); $s = (New-Object -ComObject WScript.Shell).CreateShortcut((Join-Path $d 'The New Tetris.lnk'));" ^
  "$s.TargetPath = (Resolve-Path '%DST%\TNTRecompiled.exe').Path; $s.WorkingDirectory = (Resolve-Path '%DST%').Path;" ^
  "$s.IconLocation = (Resolve-Path '%DST%\tnt.ico').Path + ',0'; $s.Description = 'The New Tetris: Recompiled'; $s.Save()"
echo.
echo Done. Start the game from "The New Tetris" on your desktop, or TNTRecompiled.exe in:
echo   %DST%
pause

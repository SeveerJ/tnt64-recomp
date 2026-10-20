@echo off
rem Starts The New Tetris: Recompiled. Console output is saved to run_log.txt.
cd /d "%~dp0out\build\windows"
TNTRecompiled.exe "%~dp0..\baserom.us.z64" %* > "%~dp0run_log.txt" 2>&1

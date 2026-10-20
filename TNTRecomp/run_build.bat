@echo off
rem Builds The New Tetris: Recompiled. Output is logged to build_log.txt.
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0build.ps1"
pause

@echo off
set UE="C:\UnrealEngine\UE_5.7\Engine\Binaries\Win64\UnrealEditor.exe"
set PROJ="C:\UnrealEngine\Projects\DLY\DLY.uproject"

%UE% %PROJ% ^
 -run=ToolRunner ^
 -mode=build ^
 -target=Windows ^
 -cmd ^
 -unattended ^
 -nop4 ^
 -nosplash ^
 -nosound ^
 -nullrhi ^
 -stdout ^
 -FullStdOutLogOutput ^
 > ToolRunner.log 2>&1

echo Done.
pause

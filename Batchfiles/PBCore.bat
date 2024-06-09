@echo off 

taskkill /im DayZ_x64.exe /F 
taskkill /im DayZServer_x64.exe /F


set path=D:\SteamLibrary\steamapps\common\DayZ\!Workshop
set pathmods=K:\DayZ\ModBuilds
set gamepath=D:\SteamLibrary\steamapps\common\DayZ
set serverpath=D:\SteamLibrary\steamapps\common\DayZServer
set tools=%path%\@CF;%path%\@Community-Online-Tools;
set mods=%path%\@PartyMe;
set allclientmods=%tools%%mods%
set serverMod=
set currentMod=%pathmods%\@PBCore;
set servercfg=K:\DayZ\Projects\PhantomByteDayZMods\ServerFiles

set missionPathch=K:\DayZ\Projects\PhantomByteDayZMods\ServerFiles\mpmissions\dayzOffline.chernarusplus
set profileFolder=%servercfg%\ServerProfile

start %serverpath%\DayZServer_x64.exe /min "-mod=%allclientmods%%currentMod%%serverMod%" "-config=%servercfg%\serverDZ.cfg" "-profiles=%profileFolder%" "-doLogs" "-adminlog" "-NoBattlEye" "-newErrorsAreWarnings=1"

start %gamepath%\DayZ_x64.exe /min "-mod=%allclientmods%%currentMod%" "-connect=127.0.0.1" "-port=2302" "-profiles=%profileFolder%" "-name=PhantomByte" "-newErrorsAreWarnings=1"
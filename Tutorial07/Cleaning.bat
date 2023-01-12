@echo off

SET RootPath=%~dp0

:: Folders
@RD /S /Q "%RootPath%intermediate"
@RD /S /Q "%RootPath%lib"
@RD /S /Q "%RootPath%x64"

:: Files
@RD /S /Q "%RootPath%Tutorial07.aps"
@RD /S /Q "%RootPath%Tutorial07.rc"
@RD /S /Q "%RootPath%Tutorial07_2008.sln"
@RD /S /Q "%RootPath%Tutorial07_2010.vcxproj"
@RD /S /Q "%RootPath%Tutorial07_2010.vcxproj.filters"
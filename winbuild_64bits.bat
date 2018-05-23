@echo off
copy CMakeLists_Windows_64bits.txt CMakeLists.txt
mkdir build
del /s /q build
cd build
"C:\Program Files\CMake\bin\cmake.exe" -G  "Visual Studio 14 2015 Win64"  ..

"C:\Program Files (x86)\MSBuild\14.0\Bin\msbuild.exe" bitcoin2network.vcxproj /p:Configuration=Release
"C:\Program Files (x86)\MSBuild\14.0\Bin\msbuild.exe" ZERO_CHECK.vcxproj /p:Configuration=Release
"C:\Program Files (x86)\MSBuild\14.0\Bin\msbuild.exe" B2Nwallet.vcxproj /p:Configuration=Release

"C:\Program Files (x86)\Inno Setup 5\Compil32.exe" /cc "..\innosetup\bitcoin2network_64bits.iss"
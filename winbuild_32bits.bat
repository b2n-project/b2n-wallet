@echo off
copy CMakeLists_Windows_32bits.txt CMakeLists.txt
mkdir build
del /s /q build
cd build
"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -G  "Visual Studio 15 2017"  ..

"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\MSBuild\15.0\Bin\msbuild.exe" bitcoin2network.vcxproj /p:Configuration=Release
"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\MSBuild\15.0\Bin\msbuild.exe" ZERO_CHECK.vcxproj /p:Configuration=Release
"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\MSBuild\15.0\Bin\msbuild.exe" B2Nwallet.vcxproj /p:Configuration=Release

"C:\Program Files (x86)\Inno Setup 5\Compil32.exe" /cc "..\innosetup\bitcoin2network_32bits.iss"

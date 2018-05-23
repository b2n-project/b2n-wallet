# Download Releases
https://github.com/b2n-project/b2n-wallet/releases


# How to build for Ubuntu/Linux

```sudo apt-get -y install build-essential libssl-dev libboost-all-dev```

```sudo apt-get -y install gcc-4.8 g++-4.8  git cmake```

```sudo apt-get install qt5-default qttools5-dev-tools```


```git clone https://github.com/b2n-project/b2n-wallet.git```

```cd b2n-wallet```

```git submodule add -f https://github.com/b2n-project/bitcoin2network.git```

```cp CMakeLists_Linux.txt CMakeLists.txt```

```mkdir build ; cd build```

```cmake ..```

```make```

```./B2Nwallet```

You can now run the bitcoin2network GUI. Make sure that bitcoin2networkd is running in a terminal window else the GUI will crash on startup.

# How to build for Windows 32/64 bits

Required Programs:

```Microsoft Visual Studio 2015```

```Binary Boost 1_63_0 msvc14```

```CMake 3.0.2 (minimum required)```

```Qt 5.10.1```

```InnoDB - www.jrsoftware.org/download.php/is.exe```

```If you download boost for 32bit run winbuild_32bits.bat```

```If you download boost for 64bit run winbuild_64bits.bat```

# How to build for Mac OS 

Install Homebrew from here: https://brew.sh/

```mkdir homebrew && curl -L https://github.com/Homebrew/brew/tarball/master | tar xz --strip 1 -C homebrew```

Open a Terminal and type: 

```brew install qt5```

```brew install cmake```

Download a copy of the b2n-wallet source:

```cd /opt```

```git clone https://github.com/b2n-project/b2n-wallet```

Enter the b2n-wallet directory:

```cd b2n-wallet```

Download the latest bitcoin2network coin codebase:

```git submodule add -f https://github.com/b2n-project/bitcoin2network```

Use the correct CMake File

```cp CMakeLists_Mac.txt CMakeLists.txt```

Create a build directory and enter it:

```mkdir build && cd build```

Run the the cmake with your qt5 lib path:

```/opt/homebrew/bin/cmake  -DCMAKE_PREFIX_PATH:STRING='/opt/homebrew/opt/qt5/lib/cmake' ..```

Run make to build the wallet:

```make```

Fix the Links

```/opt/homebrew/opt/qt/bin/macdeployqt B2Nwallet.app/```


When the build has finished, to copy the bitcoin2network GUi app into your Application folder type:

```cp -r B2Nwallet.app ~/Applications```

You can now run the bitcoin2network GUI from Finder. Make sure that bitcoin2networkd is running in a terminal window else the GUI will crash on startup.

# License

bitcoin2network's GUI Wallet is licensed under the "MIT License" for more info, refer to the [License](LICENSE) file.


<p align="center">
<img width="600" height="120" src="http://cdn.bitcoin2.network/logos/b2n-logo-lg.png">
</p>

[![Build Status](https://travis-ci.org/bitcoin2-project/bitcoin2.svg?branch=master)](https://travis-ci.org/b2n-project/bitcoin2network)
[![Build status](https://ci.appveyor.com/api/projects/status/eyuxu0c87gofex5d/branch/master?svg=true)](https://ci.appveyor.com/project/b2n-project/bitcoin2netowrk)


# Download Releases
https://github.com/b2n-project/b2n-wallet/releases



## About bitcoin2network project

**bitcoin2network** is an effort to create a privacy-centric, multi-tier, blockchain based ecosystem that is self-regulating and adaptive.

The mission of bitcoin2Network is to develop and promote its entire ecosystem without ever needing to collect a single penny from the community. The founding team of this project believes that the true intrinsic value of any open source project is derived from the time, efforts, and skills contributed by its community members. In fact, any open source project that collects millions of dollars from people nullifies the core concept of being open source– An open source project must always be developed by its community via non-monetary contributions.

Therefore, an Innovative Strategy to aide **bitcoin2network** project development is put in place- that strategy is NOT to collect an absurd amount of money from people for the development and implementation of the proposed blockchain solutions, but rather to offer a billion coins to the community via Community Building Events. These Community Building Events (CBEs) are bounty reward campaigns held to distribute B2N coins to community members for their non-monetary contributions to help develop and promote the project. That is why 5% of total supply of 21 billion B2N coins are set aside to be distributed through these bounties.

**bitcoin2netwrok** provides a fair opportunity for everyone to get involved and earn B2N coins, via bounties, in exchange for their time, efforts, and skills contributions.

**bitcoin2network** protocol is an enhancement over the original CryptoNote protocol. It is a privacy-centric, secure, untraceable, decentralised digital currency that enables users to process private instant payments from anywhere in the world. bitcoin2network uses peer-to-peer technology to operate with no central authority: managing transactions and issuing money are carried out collectively by the network. **bitcoin2network** is the name of an open source software which enables the use of this currency.

**bitcoin2network** will create Payment Gateways for integration into e-commerce systems and services retail websites to accept digital currency payments, thus giving digital currency a real-world use case.

In addition, digital wallets for storage of cryptocurrencies will be made available on our exchange, as well as exclusive applications for Android, iOS, Linux and Windows platforms.

bitcoin2network is a brain-child ambitious project of a tech-savvy team that possess the required skillset to make this project reality.

> For more information, as well as an immediately useable binary and GUI wallet version of the **bitcoin2network** software, see https://bitcoin2.network.

**BEWARE!** No ICO or any other public sales event of any nature will ever be held by bitcoin2network to raise money for the development of its proposed technology.


## Facts about bitcoin2network

* It is an open source and decentralized blockchain ecosystem that liberates people from dishonest traditional global financial systems.

* It provides cross-border digital payment gateways that eliminate central control and the need for third-parties.

* It facilitates confidential transactions by using ring signature technology and conveniently ensures all network transactions are completely secure and anonymous.

* It follows the egalitarian approach of CryptoNote and chose to use the protocol because it resonates well with b2n vision to ensure a progressive and democratic digital ecosystem.

* It provides various digital and retail solutions for real world businesses.

* B2n fees are strategically low to provide an ease of use for all individuals of the b2n ecosystem.

* There is a maximum supply of 21 billion b2n that will be mined in approximately 334 years.

* It introduces a unique way for individuals to earn b2n via community building events



## Specifications

* **Name:**    _bitcoin2network_
* **Ticker:**   _B2N_
* **PoW Algorithm:**    _CryptoNight-B2N_
* **Block time:**  _90 secs_ 
* **Maturity of mined coins:**    _60 blocks_
* **Difficulty Re-target:**    _each block_ (approx. 90 seconds)
* **Address letter:**    _btc2_
* **P2P Port:**    _19636_
* **RPC Port:**    _19635_


## B2N Coin Allocation:	

Description | Per% | Amount in B2N
----------------- | --------------- | ----------------------
Minable Supply | 95.00% | 19,950,000,000
Social Media Bounties | 0.50% | 105,000,000
Merchants Bounties | 1.00% | 210,000,000
Promotional Bounties | 0.50% | 105,000,000
R&D Bounties | 0.50% | 105,000,000
Decentralized Exchange Fund | 0.75% | 157,500,000
Project Development | 1.00% | 210,000,000
Advisors | 0.25% | 52,500,000
Founders & Team | 0.50% | 105,000,000

 


![image](http://cdn.bitcoin2.network/Documents/bitcointalk/bt-ann-allocation.png)



## Development Process

The master branch is regularly built and tested, but is not guaranteed to be completely stable. Tags are created regularly to indicate new official, stable release versions of bitcoin2network.

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

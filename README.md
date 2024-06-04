# HIT-Circle-Backend

## How to use

```
./bin/hit-circle-backend --help
```

## How to build

### Environment

- cmake 3.20+
- C++17
- Ninja-build(recommend) / makefile
- sqlite3

### Quick Start

```
# clone code
mkdir hit-circle-backend
git clone https://github.com/leebdscoding/HITSQL_Back.git .
cmake -B build -G Ninja
cmake --build build
# compile sqlite3
cd ~
mkdir sqlite
cd sqlite
wget https://www.sqlite.org/2024/sqlite-autoconf-3460000.tar.gz
tar xzvf sqlite-autoconf-3460000.tar.gz
cd sqlite-autoconf-3460000/
./configure
make && sudo make install
```

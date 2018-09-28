#!/bin/bash
sudo apt install -y cmake curl libcurl4-openssl-dev libssh-dev automake libtool
mkdir -p build
cd build
make clean
export CC=rvpc
export RVP_TRACE_ONLY=yes
export RVP_TRACE_FILE=/dev/null
cmake ..
make
make test

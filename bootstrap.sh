#!/usr/bin/env bash

apt update
apt full-upgrade -y
apt install -y gcc g++ python python3 gdb valgrind git make cmake
apt autoremove -y
apt autoclean -y

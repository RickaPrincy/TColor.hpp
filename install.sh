#! /bin/bash
git clone https://github.com/RickaPrincy/TColor.hpp.git
cd TColor.hpp
mkdir build
cd build
cmake ..
make
sudo make install
cd ../..
rm -rf TColor.hpp
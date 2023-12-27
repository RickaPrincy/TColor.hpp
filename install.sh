#! /bin/bash
git clone https://github.com/RickaPrincy/TColor.git
cd TColor
mkdir build
cd build
cmake ..
make
sudo make install
cd ../..
rm -rf TColor 
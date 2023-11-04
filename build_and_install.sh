#! /bin/bash
cmake -DTCOLOR_INSTALL=ON -S . -B build; cd build; make install
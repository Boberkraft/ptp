#!/bin/bash

/usr/bin/clang++ -std=c++17 -stdlib=libc++ -c arithmetic.cpp
/usr/bin/clang++ -std=c++17 -stdlib=libc++ -c geometric.cpp
/usr/bin/clang++ -std=c++17 -stdlib=libc++ -c main.cpp
/usr/bin/clang++ -std=c++17 -stdlib=libc++ -o myprogram arithmetic.o geometric.o main.o
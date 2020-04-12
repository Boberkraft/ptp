CC = /usr/bin/clang++ -std=c++17 -stdlib=libc++

all: main.o arithmetic.o geometric.o
	${CC} -o program main.o arithmetic.o geometric.o

main.o: main.cpp
	${CC} -I . -c main.cpp

geometric.o: geometric.cpp geometric.hpp
	${CC} -I . -c geometric.cpp

arithmetic.o: arithmetic.cpp arithmetic.hpp
	${CC} -I . -c arithmetic.cpp

.PHONY: clean
clean:
	rm geometric.o
	rm main.o
	rm arithmetic.o


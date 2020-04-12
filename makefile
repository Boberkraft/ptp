CC = /usr/bin/clang++ -std=c++17 -stdlib=libc++

all: main.o arithmetic.o geometric.o series.o 
	${CC} -o program main.o arithmetic.o geometric.o 

main.o: main.cpp
	${CC} -I . -c main.cpp 

series.o: series.cpp series.hpp
	${CC} -I . -c series.cpp

geometric.o: geometric.cpp geometric.hpp series.o
	${CC} -I . -c geometric.cpp

arithmetic.o: arithmetic.cpp arithmetic.hpp series.o
	${CC} -I . -c arithmetic.cpp

.PHONY: clean
clean:
	rm geometric.o
	rm main.o
	rm arithmetic.o
	rm series.o


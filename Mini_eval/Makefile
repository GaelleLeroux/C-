CXX=g++
override CXXFLAGS+= -g -std=c++17 -O2 -Wall -Wextra 

all: main test

main: main.o function.o 
	${CXX} $^ -o $@
test: test.o function.o 
	${CXX} $^ -o $@

main.o: main.cpp function.h
test.o: test.cpp function.h
function.o: function.cpp function.h

clean:
	rm -f *.o

mrproper: clean
	rm -f main test

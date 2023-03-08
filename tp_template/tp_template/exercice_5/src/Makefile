CXXFLAGS=-g -O2 -Wall -Wextra -std=c++11
CXX=g++

all: main

main: main.o export_matlab.o vec2.o circle.o
	${CXX} $^ -o $@

main.o: main.cpp export_matlab.hpp bezier.hpp
export_matlab.o: export_matlab.cpp export_matlab.hpp bezier.hpp
vec2.o: vec2.cpp vec2.hpp
circle.o : circle.hpp circle.cpp

clean:
	rm -f *.o *~ main
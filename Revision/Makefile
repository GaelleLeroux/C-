CXXFLAGS=-g -O2 -Wall -Wextra -std=c++11
CXX=g++

all: main


main : main.o
	${CXX} $^ -o $@

main.o: main.cpp 1920S1.hpp

clean:
	rm -f *.o *~ main


# main : main.o Animal.o Chien.o Chat.o
# 	${CXX} $^ -o $@

# main.o: main.cpp Chat.hpp Chien.hpp Animal.cpp
# Animal.o: Animal.cpp Animal.hpp
# Chien.o: Chien.cpp Chien.hpp
# Chat.o: Chat.cpp CHat.hpp

# clean:
# 	rm -f *.o *~ main
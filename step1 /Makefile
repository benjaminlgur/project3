all: proj
proj: main.o Date.h Date.o
	g++ -o main.o -c main.cpp
	g++ -o Date.o -c Date.cpp
	g++ -o proj Date.o main.o
clean:
	rm proj

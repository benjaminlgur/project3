all: proj
proj: main.o Date.h Date.o Holidays.o Holidays.h
	g++ -o main.o -c main.cpp
	g++ -o Date.o -c Date.cpp
	g++ -o Holidays.o -c Holidays.cpp
	g++ -o proj Date.o main.o Holidays.o
clean:
	rm proj

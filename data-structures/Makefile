# Minimal Makefile for Data Structures.

CC = g++
CFLAGS = -Wall -pedantic -std=c++17 -ggdb -O3

all: LinkedList

LinkedList: LinkedList.o
	$(CC) $(CFLAGS) $^ -o $@

LinkedList.o: LinkedList.cpp 
	$(CC) -c $(CFLAGS) $^

quicktest: LinkedList.cpp 
	$(CC) -c $(CFLAGS) -DUNITTEST $^
	make LinkedList
	./LinkedList

.PHONY: all clean quicktest

clean:
	rm -f LinkedList
	rm -f *.o
	rm -f *.gch

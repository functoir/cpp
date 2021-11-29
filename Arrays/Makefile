# Minimal Makefile for Data Structures.

CC = g++
CFLAGS = -Wall -pedantic -std=c++17 -ggdb

all: LinkedList

LinkedList: LinkedList.o List.o
	$(CC) $(CFLAGS) LinkedList.o -o LinkedList

LinkedList.o: List.h LinkedList.h LinkedList.cpp 
	$(CC) -c $(CFLAGS) $^

List.o: List.h
	$(CC) -c $(CFLAGS) $^

quicktest: List.h LinkedList.h LinkedList.cpp 
	$(CC) -c $(CFLAGS) -DUNITTEST $^
	$(CC) $(CFLAGS) -c List.h
	make LinkedList
	./LinkedList

.PHONY: all clean quicktest

clean:
	rm -f LinkedList
	rm -f *.o
	rm -f *.gch

# Minimal Makefile for Data Structures.

CC = g++
CFLAGS = -Wall -pedantic -std=c++17 -ggdb -O3

VALGRIND = valgrind --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./LinkedList

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

v_linkedlist: LinkedList
	$(VALGRIND) ./LinkedList

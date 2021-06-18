#
# Makefile for guess.cpp
#
# Author: siavava <amittaijoel@outlook.com>

SHELL := /bin/bash

CC = g++

PROG = guess

all: $(PROG)

guess: guess.o
	$(CC) $(CFLAGS) $^ -o $@
	rm -f *.o

guess.o: guess.cpp

test:
	make
	./guess
	make clean

clean:
	rm -f *.o
	rm -f guess
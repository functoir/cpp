#
# Makefile for types.cpp
# 
# Author: siavava <amittaijoel@outlook.com>

SHELL := bash
CC = g++

PROGS = types

all: $(PROGS)

types: types.o
	$(CC) $(CFLAGS) $^ -o $@

types.o: types.cpp

test:
	make all
	./types
	make clean

clean:
	rm -f *.o
	rm -f types

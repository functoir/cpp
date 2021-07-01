#
# Makefile for macros.cpp
# 
# Author: siavava <amittaijoel@outlook.com>

CC = g++
SHELL := bash

PROGS = macros

macros: macros.o
	$(CC) $(CFLAGS) $^ -o $@

macros.o: macros.cpp

test: $(PROGS)
	./macros
	make clean

clean:
	rm -f *.o
	rm -f macros
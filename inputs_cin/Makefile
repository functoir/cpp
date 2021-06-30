#
# Makefile for inputs_cin
# 
# Program to test cin functionality
# 
# Author: siavava <amittaijoel@outlook.com>

CC = g++
SHELL := bash

PROGS = inputs_cin

all: $(PROGS)

inputs_cin: inputs_cin.o
	$(CC) $(CFLAGS) $^ -o $@

inputs_cin.o: inputs_cin.cpp 


test:
	make all
	./inputs_cin
	make clean

clean:
	rm -f *.o
	rm -f inputs_cin
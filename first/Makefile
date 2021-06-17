# Makefile for first.cpp
# 
# Author: siavava <amittaijoel@outlook.com>

##### CPP compiler #####
CC = g++

##### compiler #####
PROG = first

##### all #####
all: $(PROG)

first: first.o

first.o: first.cpp

test:
	make all
	./first
	make clean

clean:
	rm -f *.o
	rm -f first

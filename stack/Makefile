# Makefile for first.cpp
# 
# Author: siavava <amittaijoel@outlook.com>

##### CPP compiler #####
CC = g++

CFLAGS = -Wall -pedantic -std=c++1z

TESTFLAGS = -DQUICKTEST

##### program #####
PROG = stack

##### all #####
all: $(PROG)

stack: stack.o

stack.o: stack.h

test: stack.cc
	$(CC) $(CFLAGS) $(TESTFLAGS) $^ -o stack
	./stack
	make clean

clean:
	rm -f *.o
	rm -f first

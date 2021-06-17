# Makefile for first.cpp
# 
# Author: siavava <amittaijoel@outlook.com>

##### CPP compiler #####
CC = g++

CFLAGS = -Wall -pedantic -std=c++1z

TESTFLAGS = -DQUICKTEST

##### program #####
PROGS = stack

##### all #####
all: $(PROGS)

stack: stack.o

stack.o: stack.hpp
stacktest.o: stacktest.cpp stack.hpp

quicktest: stack.hpp stack.cpp
	$(CC) $(CFLAGS) $(TESTFLAGS) $^ -o stack
	./stack
	make clean

stacktest: stacktest.o stack.o
	$(CC) $(CFLAGS) $^ -o $@
	./stacktest
	make clean

clean:
	rm -f *.o
	rm -f stack
	rm -f stacktest

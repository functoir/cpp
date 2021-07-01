#
# Makefile for bouncer.cpp
# 
# Author: siavava <amittaijoel@outlook.com>

CC = g++
SHELL := bash

PROGS = bouncer

all: $(PROGS)

bouncer: bouncer.o
	$(CC) $(CFLAGS) $^ -o $@

bouncer.o: bouncer.cpp

test:
	make all
	./bouncer
	make clean

clean:
	rm -f *.o
	rm -f bouncer
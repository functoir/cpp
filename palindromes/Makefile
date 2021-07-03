#
# Makefile for palindromes.cpp 
#       
# Author: siavava <amittaijoel@outlook.com>

CC = g++
CFLAGS = -Wall -pedantic -g -ggdb -fsanitize=address

PROG = palindromes

all: $(PROG)

palindromes: palindromes.o
	$(CC) $(CFLAGS) $^ -o $@

palindromes.o: palindromes.cpp

test:
	make all
	./palindromes
	make clean

clean:
	rm -f *.o
	rm -f $(PROG)
CC=gcc
DEPS = converter.h
TEST_DEPS = minunit.h

.PHONY: all converter test clean

all: converter test

converter: converter.o
	$(CC) -o converter main.c

%.o: %.c
	$(CC) -c $< -o $@ 

test:  $(TEST_DEPS) converter.o	
	$(CC) -o test  test.c converter.o

clean:
	rm -rf *.o test converter



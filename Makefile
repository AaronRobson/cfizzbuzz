CC = gcc
CFLAGS = -Wall -Werror -Wpedantic -s

default: all

.PHONY: all
all: build

.PHONY: build
build: cfizzbuzz

cfizzbuzz: main.o
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
	rm -rf *.o *.exe cfizzbuzz

.PHONY: run
run: build
	./cfizzbuzz

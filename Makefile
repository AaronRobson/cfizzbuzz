.PHONY: all
all: build

.PHONY: build
build: main.o
	gcc -Wall -Werror -Wpedantic -o cfizzbuzz main.o

main.o: main.c
	gcc -Wall -Werror -Wpedantic -c main.c -I ./

.PHONY: clean
clean:
	rm -rf *.o *.exe cfizzbuzz

.PHONY: run
run: build
	./cfizzbuzz

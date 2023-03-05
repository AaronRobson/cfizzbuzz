.PHONY: all
all: build

.PHONY: build
build: main.o
	gcc -Wall -Werror -o cfizzbuzz main.o

main.o: main.c
	gcc -Wall -Werror -c main.c -I ./

.PHONY: clean
clean:
	rm -rf *.o *.exe cfizzbuzz

.PHONY: run
run: build
	./cfizzbuzz

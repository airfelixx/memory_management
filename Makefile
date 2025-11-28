all:
	gcc -g -Wall -Wextra -fno-builtin mymalloc.c test.c -o bin/test

run: all
	./test

clean:
	rm -rf test

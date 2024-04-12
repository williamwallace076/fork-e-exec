CFLAGS = -Wall -std=c11

all: main hello_world

CC = clang

main: main.c
gcc $(CFLAGS) -o main main.c

hello_world: hello_world.c
	gcc $(CFLAGS) -o hello_world hello_world.c

clean:
	rm -f main hello_world

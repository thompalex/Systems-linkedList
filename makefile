all: main.o create.o
	gcc -o program main.o node.o

node.o: node.c headers.h
		gcc -c node.c

main.o: main.c headers.h
	gcc -c main.c


run:
		./program

clean:
		rm *.o
		rm program
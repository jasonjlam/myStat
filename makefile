all: stat.o main.o
	gcc -o program stat.o main.o

main.o: stat.h main.c
	gcc -c -g main.c


stat.o: stat.c
	gcc -c -g stat.c

run:
	./program

clean:
	rm *.o

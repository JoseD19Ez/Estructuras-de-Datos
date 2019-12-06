run: a.out
	./a.out
a.out: main.o doble.o
	gcc main.o doble.o
main.o: main.c
		gcc main.c -c
contigua.o: doble.c
	gcc doble.c -c
clear:
	rm -f *.o a.out

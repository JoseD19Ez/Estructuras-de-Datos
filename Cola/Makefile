run: a.out
	./a.out
a.out: main.o cola.o
	gcc main.o cola.o
main.o: main.c
		gcc main.c -c
contigua.o: cola.c
	gcc pila.c -c
clear:
	rm -f *.o a.out

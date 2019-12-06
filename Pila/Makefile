run: a.out
	./a.out
a.out: main.o pila.o
	gcc main.o pila.o
main.o: main.c
		gcc main.c -c
contigua.o: pila.c
	gcc pila.c -c
clear:
	rm -f *.o a.out

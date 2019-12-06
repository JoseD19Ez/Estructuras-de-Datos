run: a.out
	./a.out
a.out: main.o ligada.o
	gcc main.o ligada.o
main.o: main.c
		gcc main.c -c
contigua.o: ligada.c
	gcc ligada.c -c
clear:
	rm -f *.o a.out

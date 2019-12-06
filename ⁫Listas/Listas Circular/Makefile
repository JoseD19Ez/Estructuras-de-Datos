run: a.out
	./a.out
a.out: main.o circular.o
	gcc main.o circular.o
main.o: main.c
		gcc main.c -c
contigua.o: circular.c
	gcc circular.c -c
clear:
	rm -f *.o a.out

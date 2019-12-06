run: a.out
	./a.out
a.out: main.o contigua.o
	gcc main.o contigua.o
main.o: main.c
		gcc main.c -c
contigua.o: contigua.c
	gcc contigua.c -c
clear:
	rm -f *.o a.out

run: a.out
	./a.out
a.out: main.o THasha.o
	gcc main.o THasha.o
main.o: main.c
		gcc main.c -c
contigua.o: THasha.c
	gcc THasha.c -c
clear:
	rm -f *.o a.out

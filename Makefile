Build: main.o system.o
	gcc main.o system.o -o ptrn
main.o : main.c 
	gcc -Wall -c main.c
system.o : system.c
	gcc -Wall -c system.c system.h
test:
	gcc -Wall test.c src/triangle/t_vertical.c -o test && ./test

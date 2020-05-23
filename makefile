all:ex3

main.o: main.c menu.h tipos.h logica.h
	gcc -c main.c

menu.o: menu.c menu.h tipos.h file.h
	gcc -c menu.c

file.o: file.c file.h
	gcc -c file.c

ex3: main.o menu.o file.o
	gcc main.o menu.o file.o -o ex3.exe
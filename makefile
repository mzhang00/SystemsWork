all: mainfunction.o definedfunctions.o
	gcc -o program mainfunction.o definedfunctions.o

mainfunction.o: mainfunction.c functionheaders.h
	gcc -c mainfunction.c

definedfunctions.o: definedfunctions.c functionheaders.h
	gcc -c definedfunctions.c

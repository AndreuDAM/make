calcula:calcula.c calc.o
	gcc -Wall -g calcula.c calc.o -o calcula

calc.o:
	gcc -c calc.c -o calc.o

.PHONY:clean
clean:
	rm -rf calcula calc.o
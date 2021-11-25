este seria el contingut de la funció del major que
~~~
int major(int a, int b)
    {
        if(a>b){
            return a;
        }else{
            return b;
        }
        }
~~~    
despres agafarem en els fitxers de calc.h i calc.c per a guardarlos en .o i finalment per a que tinguem el calcula
~~~
gcc -c calc.c -o calc.o
gcc -Wall -g calcula.c calc.o -o calcula
~~~
també podem gastar el PHONY per a netejar els fitxers que no necesitarem
~~~
.PHONY:clean
clean:
	rm -rf calcula calc.o
~~~

#include <stdio.h>
int suma(int a, int b)
{
    return a+b;
}

int resta(int a, int b)
{
    return a-b;
}

int multiplica(int a,int b)
{
    return a*b;
}

int divide(int a, int b)
{
    return a/b;
}
int major(int a, int b)
    {return a || b;}
int main(){
    int a,b;
    printf("Introduce dos numeros:\n");
    scanf("%d %d" ,&a, &b);
    printf("La suma entre %d y %d vale %d\n",a,b,suma(a,b));
    printf("La resta entre %d y %d vale %d\n",a,b,resta(a,b));
    printf("La multiplicacio entre %d y %d vale %d\n",a,b,multiplica(a,b));
    printf("La divisio entre %d y %d vale %d\n",a,b,divide(a,b));
    printf("El major entre %d y %d es %d\n",a,b,major(a,b));
    return 0;
}
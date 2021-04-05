#include <stdio.h>
#include <stdlib.h>
#define VERDADERO 1
#define FALSO 0

int main()
{
    int num,div,es_primo=VERDADERO;

    //Inicialización
    printf("Ingrese el número 'num': ");
    scanf("%d",&num);

    //Demostrar si 'num' es primo o no
    for(div=2;div<num;div++)
    {
        if(num%div==0)
            es_primo=FALSO;
    }

    //Impresión
    if(es_primo==VERDADERO)
        printf("\n\nnum es primo");
    else
        printf("\n\nnum no es primo");
    return 0;
}


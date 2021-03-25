#include <stdio.h>
#include <stdlib.h>

/*  Realice un programa en el cual se pide al usuario que ingrese tres números e
imprima cual es el mayor de los tres. Suponga que son distintos.*/

int main()
{
    int a,b,c;

    //Carga de los números
    printf("Ingrese el número a: ");
    scanf("%d",&a);
    printf("\nIngrese el número b: ");
    scanf("%d",&b);
    printf("\nIngrese el número c: ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
            printf("\n\na es el mayor");
        else
            printf("\n\nc es el mayor");
    }
    else
    {
        if(b>c)
            printf("\n\nb es el mayor");
        else
            printf("\n\nc es el mayor");
    }

    return 0;
}


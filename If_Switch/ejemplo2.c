#include <stdio.h>
#include <stdlib.h>

/* Realice un programa en el cual se pide al usuario que se ingrese un número entero
y se imprima un texto indicando si es positivo, negativo o neutro (cero).*/

int main()
{
    int num;

    //Tomo el número del teclado
    printf("Ingrese un número: ");
    scanf("%d",&num);

    //Estructura de decisión
    if(num>0)
        printf("\nnum es positivo");
    else if (num<0)
        printf("\nnum es negativo");
    else
        printf("\nnum es cero");

    return 0;
}

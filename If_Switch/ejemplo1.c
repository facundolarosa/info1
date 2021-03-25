#include <stdio.h>
#include <stdlib.h>

/* Realice un programa en el cual se pide al usuario que se ingresen dos números
enteros y se imprime un texto indicando si son iguales o no.
Variante: Los números pueden tener parte fraccionaria (reales)*/

int main()
{
    int num1,num2;

    //Pido al usuario que ingrese dos números
    printf("Ingrese el primer número: ");
    scanf("%d",&num1);
    printf("\nIngrese el segundo número: ");
    scanf("%d",&num2);

    //Evaluamos la igualdad e imprimimos en cual de los casos estamos
    if(num1==num2)
        printf("\n\nLos números son iguales");
    else
        printf("\n\nLos números son distintos");

    return 0;
}

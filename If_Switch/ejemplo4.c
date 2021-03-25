#include <stdio.h>
#include <stdlib.h>

/* Realice un programa en el cual se pide al usuario que ingrese las longitudes de los lados de un triángulo
e indique si el triángulo es equilátero, isósceles o escaleno.*/

int main()
{
    float a,b,c;

    //Carga de los lados
    printf("Ingrese el lado 'a': ");
    scanf("%f",&a);
    printf("\nIngrese el lado 'b': ");
    scanf("%f",&b);
    printf("\nIngrese el lado 'c': ");
    scanf("%f",&c);

    //Estructura de decisión
    if (a==b && a==c)
        printf("\n\nEl triángulo es equilátero");
    else if (a!=b && b!=c && a!=c)
        printf("\n\nEl triángulo es escaleno");
    else
        printf("\n\nEl triángulo es isósceles");

    return 0;
}


#include <stdio.h>

void modificaVar(int * p, int valor)
{
    //Imprimir la dirección de memoria de la variable
    printf("\nLa dirección de memoria es %p\n",p);

    //Imprimir el valor actual de la variable cuya dirección se pasa
    printf("\nEl valor actual de la variable es %d\n",*p);

    //Modifiquemos el valor de la variable reemplazándolo por "valor"
    *p=valor;
}

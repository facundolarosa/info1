#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    char caracter;

    printf("[MAIN] Ingrese un caracter: ");
    scanf("%c",&caracter);
    printf("\n\n[MAIN] El caracter ingresado es: %c\n",caracter);

    pasarMayuscula(&caracter);

    printf("\n\n[MAIN] El caracter luego del retorno de la funcion es: %c\n",caracter);

    return 0;
}

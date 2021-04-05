#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra_1,letra_2,letra;

    //Carga de datos
    printf("Ingrese el valor de la primer letra: ");
    scanf("%c",&letra_1);
    printf("\n\nIngrese el valor de la segunda letra: ");
    scanf(" %c",&letra_2);

    letra=letra_1;

    printf("\n\nLa secuencia de letras es: ");
    do{
        letra++;
        printf("%c ",letra);
    }while(letra<letra_2-1);

    return 0;
}


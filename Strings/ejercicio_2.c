#include <stdio.h>
#include <string.h>
#define TAM 30
#define CANT_ALUMNOS 5

int main()
{
    char alumnos[CANT_ALUMNOS][TAM];
    char aux[TAM];
    int i,j;

    //1. Carga de los strings
    for(i=0;i<CANT_ALUMNOS;i++)
    {
        printf("\nIngrese un nombre (%d): ",i+1);
        fgets(alumnos[i],TAM,stdin);
    }

    //2. Ordenar los strings
    for(i=0;i<CANT_ALUMNOS-1;i++)
        for(j=0;j<CANT_ALUMNOS-1-i;j++)
            if(strcmp(alumnos[j],alumnos[j+1])>0)
            {
                //swap
                strcpy(aux,alumnos[j]);
                strcpy(alumnos[j],alumnos[j+1]);
                strcpy(alumnos[j+1],aux);
            }

    printf("\n\nEl listado de alumnos ordenado es: \n\n");

    //3. Imprimir los strings
    for(i=0;i<CANT_ALUMNOS;i++)
    {
        printf("%s",alumnos[i]);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
#define TAM 30
#define CANT_ALUMNOS 5
#define NO_ESTA -1

int main()
{
    char alumnos[CANT_ALUMNOS][TAM];
    char nombre_buscar[TAM];
    int i,pos=NO_ESTA;

    //1. Carga de los strings
    for(i=0;i<CANT_ALUMNOS;i++)
    {
        printf("\nIngrese un nombre (%d): ",i+1);
        fgets(alumnos[i],TAM,stdin);
    }

    //2. Solicitar un nombre y realizar la búsqueda

    printf("\n\nIngrese un nombre a buscar: ");
    fgets(nombre_buscar,TAM,stdin);

    for(i=0;i<CANT_ALUMNOS;i++)
    {
        if(strcmp(nombre_buscar,alumnos[i])==0)
            pos=i;
    }

    if(pos==NO_ESTA)
        printf("\n\nNo se encontró el alumno indicado");
    else
        printf("\n\nSe encontró al alumno %s en la posición %d",nombre_buscar,pos);

    return 0;
}

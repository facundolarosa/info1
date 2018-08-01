/* Inclusiones */
 
#include "biblioteca.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/* Declaración de funciones */

int cargarInventario(libro_t *libros,int max)
{
	FILE *fp;
	int i, cant;
	libro_t actual;
	if(!(fp = fopen(ARCHIVO_INV, "rb"))){
		printf("\nAsegurese de haber copiado el archivo \"%s\" en la carpeta actual", ARCHIVO_INV);
		return -1;
	}
	fseek(fp,0,SEEK_END);
	cant = ftell(fp)/sizeof(libro_t);
	rewind(fp);
	for( i = 0 ; i < max && i < cant ; i++ ){
		fread(&actual,sizeof(actual),1,fp);
		libros[i] = actual;
	}
	fclose(fp);
	return i;
}

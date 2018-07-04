//Autor: Facundo Larosa
//Fecha: 04/07/2018
//El ejercicio ejemplifica la implementación de un programa utilizando
//vectores de estructuras, ordenamiento, etc.
//Se debe compilar junto con "func_alumnos.h" y "func_alumnos.c"


#include <stdio.h>
#include <string.h>
#include "func_alumnos.h"

/*
Se ingresan los datos de un curso de Informática I, incluyendo:
nombre y apellido (char [30]), promedio (float) y sexo (char). El
curso no tiene más de 60 alumnos. Se pide imprimir los datos de
los cinco mejores alumnos y las cinco mejores alumnas (suponga
que hay al menos cinco alumnos y cinco alumnas).
*/

#define N 60
#define STRING_FIN "fin"
#define TOP 3

void main (void)
{
	struct alumno_s alumnos[N],aux;
	int n;

	//CARGA DE DATOS
	//Ingrese un alumno
	printf("\n\nIngrese el nombre y apellido del alumno: ");
	gets(aux.nombre);
	
	//Evaluamos si no es el alumno "fin"
	while(strcmp(aux.nombre,STRING_FIN))
	{
		//En caso de que no lo sea, lo cargamos en el vector
		printf("\n\nIngrese el promedio del alumno: ");
		scanf("%f",&aux.promedio);
		getchar();
		printf("\n\nIngrese el sexo del alumno: ");
		scanf("%c",&aux.sexo);
		getchar();
		//Tenemos inicializada la estructura 'aux' con los datos del alumno

		n=cargarAlumno(aux,alumnos);

		printf("\n\nIngrese el nombre y apellido del alumno: ");
		gets(aux.nombre);
		

	}
	//En caso de que lo sea, finalizamos la carga

	//PROCESAMIENTO DE DATOS
	//Ordenar el vector en orden decreciente por promedio del alumno
	ordenarAlumno(alumnos,n);
	//Imprimir los datos de las cinco mejores alumnas
	printf("\n\nSE VAN A IMPRIMIR LOS DATOS DE LAS CINCO MEJORES ALUMNAS: ");
	imprimirAlumnos(alumnos,TOP,'F',N);
	//Imprimir los datos de las cinco mejores alumnos
	printf("\n\nSE VAN A IMPRIMIR LOS DATOS DE LAS CINCO MEJORES ALUMNOS: ");
	imprimirAlumnos(alumnos,TOP,'M',N);
	printf("\n\n");
}

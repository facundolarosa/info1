//Autor: Facundo Larosa
//Fecha: 04/07/2018
//El ejercicio ejemplifica el pasaje y devolución de estructuras con funciones

#include <stdio.h>
#include <string.h>

//Declaración del tipo de datos(de forma global)
struct alumno_s
{
	char nombre[30];
	int legajo;
	char carrera;
};

//Prototipos
struct alumno_s adquirirDatos(void);
void imprimirDatos(struct alumno_s var);


int main (void)
{
	struct alumno_s alumno;
	alumno=adquirirDatos();
	imprimirDatos(alumno);
}

struct alumno_s adquirirDatos(void)
{
	struct alumno_s var;

	printf("\n\nIngrese nombre del alumno: ");
	gets(var.nombre);

	printf("\n\nIngrese legajo del alumno: ");
	scanf("%d",&var.legajo);

	getchar();

	printf("\n\nIngrese código de carrera del alumno: ");
	scanf("%c",&var.carrera);

	return var;
}

void imprimirDatos(struct alumno_s var)
{
	printf("\n\n*********************");

	printf("\n\n%s %d %c", var.nombre,var.legajo,var.carrera);

	printf("\n\n*********************\n\n");
}

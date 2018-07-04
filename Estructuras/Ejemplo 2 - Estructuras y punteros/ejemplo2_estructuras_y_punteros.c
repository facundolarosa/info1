//Autor: Facundo Larosa
//Fecha: 04/07/2018
//El ejercicio ejemplifica la utilización de punteros con estructuras por medio del operador ->


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
void adquirirDatos(struct alumno_s * p);
void imprimirDatos(struct alumno_s var);

//Declaración de la variable (de forma local)
int main (void)
{
	struct alumno_s alumno;
	adquirirDatos(&alumno);
	imprimirDatos(alumno);
}

void adquirirDatos(struct alumno_s * p)
{
	printf("\n\nIngrese nombre del alumno: ");
	gets(p->nombre);

	printf("\n\nIngrese legajo del alumno: ");
	scanf("%d",&(p->legajo));
	getchar();

	printf("\n\nIngrese código de carrera del alumno: ");
	scanf("%c",&(p->carrera));

}

void imprimirDatos(struct alumno_s var)
{
	printf("\n\n*********************");

	printf("\n\n%s %d %c", var.nombre,var.legajo,var.carrera);

	printf("\n\n*********************\n\n");
}

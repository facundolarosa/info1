#include <stdio.h>
#include "func_alumnos.h"

int cargarAlumno(struct alumno_s aux,struct alumno_s * alumnos)
{
	static int pos=0;

	alumnos[pos]=aux;

	pos++;

	return pos;
}

void ordenarAlumno(struct alumno_s * alumnos,int n)
{
	int i,j;
	struct alumno_s aux;

	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(alumnos[j].promedio<alumnos[j+1].promedio)
			{	
				//SWAP
				aux=alumnos[j];
				alumnos[j]=alumnos[j+1];
				alumnos[j+1]=aux;
			}
}
void imprimirAlumnos(struct alumno_s * alumnos,int n,char sexo, int tam)
{
	int i;

	for(i=0;i<tam;i++)
	{
		if(alumnos[i].sexo=sexo)
		{
			printf("\n%30s %.2f",alumnos[i].nombre,alumnos[i].promedio);
			n--;
			if(n==0)
			return;		
		}
	}
}

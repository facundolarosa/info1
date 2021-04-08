/* ----------ENUNCIADO -------------

Se desea hacer un programa que opere como una calculadora simple. El programa pide en
un menú las siguientes opciones:
0. Suma
1. Resta
2. Multiplicación
3. División
4. Potenciación [el exponente es un número entero positivo o negativo]
5. Salir
Una vez seleccionada la opción, el programa solicita el ingreso de los datos y muestra el
resultado por pantalla. Luego, borra la pantalla y vuelve a imprimir el menú hasta que el
usuario decida salir. [Nota: para borrar la pantalla hacer system (“clear”), system es una
función de la biblioteca “stdlib.h”]. Todas las operaciones usan dos operandos.
*/

#include <stdio.h>
#include <stdlib.h>

#define POSITIVO 1
#define NEGATIVO 0

//Prototipos
int imprime_menu (void);
void suma  (void);
void resta (void);
void multiplicacion (void);
void division (void);
void potenciacion (void);
float potencia (float, float);

int main (void)
{
	int   seleccion  = 0;
	
	do{
		seleccion=imprime_menu();

		switch(seleccion)
		{
			case 0: suma();
				break;
			case 1: resta();
				break;
			case 2: multiplicacion();
				break;
			case 3: division();
				break;
			case 4: potenciacion();
				break;
			default:printf("\n\nSaliendo del programa...");
				break;
		}	
		
		printf("\n\nPresione ENTER para continuar...");
		getchar();
		getchar();
		

	}while(seleccion >= 0 && seleccion <=4);
	
	return 0;
}

/*     --------- función: imprime_menu ------------
       Imprime el menú del programa y devuelve la opción ingresada
*/
int imprime_menu (void)
{
	int seleccion;

	//Reemplace con system("cls") si usa Windows
	system("clear");
	printf("\n\nIngrese una de las siguientes operaciones a realizar: \n");
	printf("0. Suma \n");
	printf("1. Resta \n");
	printf("2. Multiplicación \n");
	printf("3. División \n");
	printf("4. Potenciación \n");
	printf("5. Salir \n\n");
	printf("Ingrese su opción y presione ENTER: ");	

	scanf("%d",&seleccion);
	return seleccion;
}

/*     --------- función: suma ------------
       Solicita el ingreso de dos números e imprime su suma en pantalla
*/
void suma (void)
{
	float operando_1 = 0;
	float operando_2 = 0;
	float resultado  = 0;

	printf("\n\nIngrese el primer sumando: ");
	scanf("%f",&operando_1);
	printf("\nIngrese el segundo sumando: ");
	scanf("%f",&operando_2);
	resultado = operando_1 + operando_2;
	printf("\n\n %.2f + %.2f = %.2f",operando_1,operando_2,resultado);
}

/*     --------- función: resta ------------
       Solicita el ingreso de dos números e imprime su resta en pantalla
*/
void resta (void)
{
	float operando_1 = 0;
	float operando_2 = 0;
	float resultado  = 0;

	printf("\n\nIngrese el minuendo: ");
	scanf("%f",&operando_1);
	printf("\nIngrese el sustraendo: ");
	scanf("%f",&operando_2);
	resultado = operando_1 - operando_2;
	printf("\n\n %.2f - %.2f = %.2f",operando_1,operando_2,resultado);
}

/*     --------- función: multiplicacion ------------
       Solicita el ingreso de dos números e imprime su multiplicacion en pantalla
*/

void multiplicacion (void)
{

	float operando_1 = 0;
	float operando_2 = 0;
	float resultado  = 0;	

	printf("\n\nIngrese el primer factor: ");
	scanf("%f",&operando_1);
	printf("\nIngrese el segundo factor: ");
	scanf("%f",&operando_2);
	resultado = operando_1 * operando_2;
	printf("\n\n %.2f * %.2f = %.2f",operando_1,operando_2,resultado);
}

/*     --------- función: división ------------
       Solicita el ingreso de dos números e imprime su división en pantalla
*/

void division (void)
{
	float operando_1 = 0;
	float operando_2 = 0;
	float resultado  = 0;

	printf("\n\nIngrese el cociente: ");
	scanf("%f",&operando_1);
	printf("\nIngrese el divisor: ");
	scanf("%f",&operando_2);
	resultado = operando_1 / operando_2;
	printf("\n\n %.2f / %.2f = %.2f",operando_1,operando_2,resultado);
}

/*     --------- función: potenciación ------------
       Solicita el ingreso de dos números e imprime su potencia en pantalla
*/

void potenciacion (void)
{
	float operando_1 = 0;
	float operando_2 = 0;
	float resultado  = 0;

	printf("\n\nIngrese la base: ");
	scanf("%f",&operando_1);
	printf("\nIngrese el exponente: ");
	scanf("%f",&operando_2);
	
	resultado=potencia(operando_1,operando_2);

	printf("\n\n %.2f ^ %.2f = %.4f",operando_1,operando_2,resultado);
}

/*     --------- función: potencia ------------
       float potencia(float base, float exponente)

	Solicita:
		* base     : base de la potencia a realizar
		* exponente: exponente de la potencia a realizar
	Devuelve:
		* Resultado de la operación base^exponente
*/

float potencia(float base,float exponente)
{
	float resultado = 0;
	int   signo        ;
	int   i            ;

	//Me aseguro de quedarme solamente con la parte entera
	exponente =(int) exponente;
	if (exponente >= 0)	
		signo=POSITIVO;
	else
	{
		signo=NEGATIVO;
		//Me quedo con el módulo del exponente
		exponente=-exponente;				
	}
	
	for (i=0,resultado = 1; i<exponente; i++)
		resultado=resultado*base;

	if (signo == NEGATIVO)
		resultado=1/resultado;

	return resultado;
}

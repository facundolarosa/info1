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

int main (void)
{
	float operando_1 = 0;
	float operando_2 = 0;
	int   seleccion  = 0;
	float resultado  = 0;
	int   signo      = POSITIVO;
	int   i          = 0;

	do{
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

		switch(seleccion)
		{
			case 0: printf("\n\nIngrese el primer sumando: ");
				scanf("%f",&operando_1);
				printf("\nIngrese el segundo sumando: ");
				scanf("%f",&operando_2);
				resultado = operando_1 + operando_2;
				printf("\n\n %.2f + %.2f = %.2f",operando_1,operando_2,resultado);
				break;
			case 1: printf("\n\nIngrese el minuendo: ");
				scanf("%f",&operando_1);
				printf("\nIngrese el sustraendo: ");
				scanf("%f",&operando_2);
				resultado = operando_1 - operando_2;
				printf("\n\n %.2f - %.2f = %.2f",operando_1,operando_2,resultado);
				break;
			case 2: printf("\n\nIngrese el primer factor: ");
				scanf("%f",&operando_1);
				printf("\nIngrese el segundo factor: ");
				scanf("%f",&operando_2);
				resultado = operando_1 * operando_2;
				printf("\n\n %.2f * %.2f = %.2f",operando_1,operando_2,resultado);
				break;
			case 3: printf("\n\nIngrese el cociente: ");
				scanf("%f",&operando_1);
				printf("\nIngrese el divisor: ");
				scanf("%f",&operando_2);
				resultado = operando_1 / operando_2;
				printf("\n\n %.2f / %.2f = %.2f",operando_1,operando_2,resultado);
				break;
			case 4: printf("\n\nIngrese la base: ");
				scanf("%f",&operando_1);
				printf("\nIngrese el exponente: ");
				scanf("%f",&operando_2);
				//Me aseguro de quedarme solamente con la parte entera
				operando_2=(int) operando_2;
				if (operando_2>=0)	
					signo=POSITIVO;
				else
				{
					signo=NEGATIVO;
					//Me quedo con el módulo del exponente
					operando_2=-operando_2;				
				}
				
				for (i=0,resultado = 1; i<operando_2; i++)
					resultado=resultado*operando_1;

				if (signo == NEGATIVO)
					resultado=1/resultado;
				printf("\n\n %.2f ^ %.2f = %.4f",operando_1,operando_2,resultado);
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

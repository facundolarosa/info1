#include <stdio.h>
#include <stdlib.h>

#define SUMA 0
#define RESTA 1
#define MULTIPLICACION 2
#define DIVISION 3
#define POTENCIACION 4
#define SALIR 5

/*
Se desea hacer un programa que opere como una calculadora simple. El programa pide en
un menú las siguientes opciones:
0. Suma
1. Resta
2. Multiplicación
3. División
4. Potenciación
5. Salir
*/

int main()
{
    int sel,operando_1,operando_2,potencia,i;

    printf("--- Calculadora 1.0 ---\n");
    printf("\n0.Suma");
    printf("\n1.Resta");
    printf("\n2.Multiplicación");
    printf("\n3.División");
    printf("\n4.Potenciación");
    printf("\n5.Salir");
    printf("\n\nIngrese la operación que desea realizar: ");

    scanf("%d",&sel);

    while(sel!=SALIR)
    {
        switch(sel)
        {
            case SUMA:
                        printf("\n\nIngrese el primer sumando: ");
                        scanf("%d",&operando_1);
                        printf("\n\nIngrese el segundo sumando: ");
                        scanf("%d",&operando_2);
                        printf("\n\n%d + %d = %d",operando_1,operando_2,operando_1+operando_2);
                        break;
            case RESTA:
                        printf("\n\nIngrese el minuendo: ");
                        scanf("%d",&operando_1);
                        printf("\n\nIngrese el sustraendo: ");
                        scanf("%d",&operando_2);
                        printf("\n\n%d - %d = %d",operando_1,operando_2,operando_1-operando_2);
                        break;
            case MULTIPLICACION:
                        printf("\n\nIngrese el primer factor: ");
                        scanf("%d",&operando_1);
                        printf("\n\nIngrese el segundo factor: ");
                        scanf("%d",&operando_2);
                        printf("\n\n%d * %d = %d",operando_1,operando_2,operando_1*operando_2);
                        break;
            case DIVISION:
                        printf("\n\nIngrese el cociente: ");
                        scanf("%d",&operando_1);
                        printf("\n\nIngrese el divisor: ");
                        scanf("%d",&operando_2);
                        printf("\n\n%d / %d = %d",operando_1,operando_2,operando_1/operando_2);
                        break;
            case POTENCIACION:
                        printf("\n\nIngrese la base: ");
                        scanf("%d",&operando_1);
                        printf("\n\nIngrese el exponente: ");
                        scanf("%d",&operando_2);
                        potencia=1;
                        for(i=0;i<operando_2;i++)
                            potencia=potencia*operando_1;
                        printf("\n\n%d ^ %d = %d",operando_1,operando_2,potencia);
                        break;
            case SALIR:
                        printf("\n\nSaliendo del programa...");
                        break;
            default:
                        printf("\n\nSe ingresó una opción incorrecta");
                        break;

        }
        printf("\n\nPresione una tecla para continuar...");
        getchar();
        getchar();
        system("clear"); //system("cls");
        printf("--- Calculadora 1.0 ---\n");
        printf("\n0.Suma");
        printf("\n1.Resta");
        printf("\n2.Multiplicación");
        printf("\n3.División");
        printf("\n4.Potenciación");
        printf("\n5.Salir");
        printf("\n\nIngrese la operación que desea realizar: ");

        scanf("%d",&sel);
    }

    return 0;
}


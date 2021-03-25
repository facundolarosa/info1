#include <stdio.h>
#include <stdlib.h>

/*Realice un programa que de al usuario la posibilidad de realizar cuatro operaciones
(suma, resta, multiplicación y división) de acuerdo a una opción numérica y luego solicite
los operandos y dé el resultado.*/

int main()
{
    float op_1,op_2;
    int sel;

    //Carga de la opción deseada
    printf("Ingrese la operación que desea realizar:");
    printf("\n0.Suma");
    printf("\n1.Resta");
    printf("\n2.Multiplicación");
    printf("\n3.División");
    printf("\n\nIngrese la opción deseada: ");
    scanf("%d",&sel);

    //Menú
    switch(sel)
    {
        case 0: printf("\n\nSe realizará la operación suma");
                printf("\nIngrese el primer sumando: ");
                scanf("%f",&op_1);
                printf("\nIngrese el segundo sumando: ");
                scanf("%f",&op_2);
                printf("\n\nEl resultado de %.2f + %.2f = %.2f",op_1,op_2,op_1+op_2);
                break;
        case 1: printf("\n\nSe realizará la operación resta");
                printf("\nIngrese el minuendo: ");
                scanf("%f",&op_1);
                printf("\nIngrese el sustraendo: ");
                scanf("%f",&op_2);
                printf("\n\nEl resultado de %.2f - %.2f = %.2f",op_1,op_2,op_1-op_2);
                break;
        case 2: printf("\n\nSe realizará la operación multiplicación");
                printf("\nIngrese el primer factor: ");
                scanf("%f",&op_1);
                printf("\nIngrese el segundo factor: ");
                scanf("%f",&op_2);
                printf("\n\nEl resultado de %.2f * %.2f = %.2f",op_1,op_2,op_1*op_2);
                break;
        case 3: printf("\n\nSe realizará la operación división");
                printf("\nIngrese el cociente: ");
                scanf("%f",&op_1);
                printf("\nIngrese el divisor: ");
                scanf("%f",&op_2);
                printf("\n\nEl resultado de %.2f / %.2f = %.2f",op_1,op_2,op_1/op_2);
                break;
        default:printf("\n\nLa opción ingresada no existe");
                break;
    }

    return 0;
}


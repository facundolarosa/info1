#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,factor=1;

    //Inicialización
    printf("Ingrese el número cuya tabla se va a imprimir: ");
    scanf("%d",&num);

    //Comprobación del valor de entrada
    if(num<1 || num>9)
    {
        printf("\n\nEl número no está en el rango de 1 a 9, vuelva a intentar...");
        return 0;
    }
    //Impresión de la tabla del número

    printf("\n\nTABLA DEL %d\n\n",num);
    while(factor<10)
    {
        printf("%d * %d = %d\n",num,factor,num*factor);
        factor++;
    }

    return 0;
}

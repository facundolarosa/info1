#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char R,G,B;
    unsigned int RGB;
    char * pRGB;

    R=0x10; //0x() -> El número está en formato hexadecimal
    G=0x20;
    B=0x30;

    //Operación de empaquetado

    pRGB= (char *) &RGB;

    *pRGB=B;
    pRGB++;

    *pRGB=G;
    pRGB++;

    *pRGB=R;
    pRGB++;

    *pRGB=0x00;

    //RGB=0x00102030

    printf("El valor de RGB es: %X",RGB);
}


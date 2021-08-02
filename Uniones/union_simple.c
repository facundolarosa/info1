#include <stdio.h>
#include <stdlib.h>

union RGB_u
{
    int RGB_int;
    unsigned char RGB_vec[4];
};

int main()
{
    int RGB;
    union RGB_u RGB_union;

    RGB_union.RGB_vec[0]=0x30; //B
    RGB_union.RGB_vec[1]=0x20; //G
    RGB_union.RGB_vec[2]=0x10; //R
    RGB_union.RGB_vec[3]=0x00; //0x00

    //RGB=0x00102030

    RGB=RGB_union.RGB_int;

    printf("El valor de RGB es: %X",RGB);
}

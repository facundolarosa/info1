#include <stdio.h>
#include <stdlib.h>

int suma (int, int);

int main(void)
{
    int a=5,b=3,c;

    c=suma(a,b);

    printf("c=%d=%d+%d",c,a,b);

    return 0;
}

int suma (int x, int y)
{
    int z;

    z=x+y;

    return z;

}


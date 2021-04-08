#include <stdio.h>
#include <stdlib.h>
#include "primo.h"
#define TOPE 1000

int main(void)
{
    int i;

    for(i=1;i<TOPE;i++)
        if(es_primo(i)==VERDADERO && es_primo(i+2)==VERDADERO)
            printf("\nSe detectó un par primo: %d y %d",i,i+2);
}



#include <stdio.h>
#include <stdlib.h>

#define FALSO 0
#define VERDADERO 1
#define TOPE 1000

int es_primo (int);

int main(void)
{
    int i;

    for(i=1;i<TOPE;i++)
        if(es_primo(i)==VERDADERO && es_primo(i+2)==VERDADERO)
            printf("\nSe detectó un par primo: %d y %d",i,i+2);
}

int es_primo (int num)
{
    int div,num_es_primo=VERDADERO;

    for(div=2;div<num;div++)
    {
        if(num%div==0)
            num_es_primo=FALSO;
    }

    return num_es_primo;
}


#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    int variable=10;

    modificaVar(&variable,20);

    printf("\nvariable=%d\n",variable);

    return 0;
}

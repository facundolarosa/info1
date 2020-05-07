#include <stdio.h>
#include "vector.h"

#define TAM 5

int main(void) 
{
  int vector[TAM]={3,2,5,-4,-2};

  printf("\n\n**** Vector SIN ordenar ****\n\n");
  imprimirVector(vector,TAM);

  selSort(vector,TAM);

  printf("\n\n**** Vector ordenado ****\n\n");
  imprimirVector(vector,TAM);

  return 0;
}
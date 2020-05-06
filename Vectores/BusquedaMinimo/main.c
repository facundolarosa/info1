#include <stdio.h>
#include "vector.h"

#define TAM 5

int main(void) 
{
  int vector[TAM]={3,2,5,-4,-2};
  int minimo;

  minimo=hallarMinimo(vector,TAM);

  printf("\n\nEl mínimo del vector es: %d\n\n",minimo);

  return 0;
}
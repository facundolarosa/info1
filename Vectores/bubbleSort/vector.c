#include <stdio.h>

void imprimirVector(int * vec, int tam)
{
  int i;

  for(i=0;i<tam;i++)
    printf("\nvec[%d] = %d",i,vec[i]);

  printf("\n\n");
}

void bubbleSort(int * vec, int tam)
{
  int i,j,aux;

    for(i=0;i<tam-1;i++)
    {
      for(j=0;j<tam-1-i;j++)
        if(vec[j]>vec[j+1])
        {
          aux=vec[j];
          vec[j]=vec[j+1];
          vec[j+1]=aux;          
        }
        printf("****Interación %d ****",i);
        imprimirVector(vec,tam);
        getchar();
    }
}
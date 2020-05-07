#include <stdio.h>

void imprimirVector(int * vec, int tam)
{
  int i;

  for(i=0;i<tam;i++)
    printf("\nvec[%d] = %d",i,vec[i]);
}

void selSort(int * vec, int tam)
{
  int i,j,aux,posMin;

    for(i=0;i<tam-1;i++){
        posMin=i;
        for(j=i+1;j<tam;j++){
            if(vec[j]<vec[posMin])
                posMin=j;

        }

            printf("\nIteración %d - El mínimo es %d",i,vec[posMin]);
            printf("\nVector antes del swap:\n");
            imprimirVector(vec,tam);
            aux=vec[i];
            vec[i]=vec[posMin];
            vec[posMin]=aux;
            printf("\nVector después del swap:\n");
            imprimirVector(vec,tam);
            printf("\n**************************\n\n");
            getchar();

    }

}
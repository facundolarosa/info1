int hallarMinimo(int * vec, int tam)
{
  int minimo,i;

  minimo=vec[0];

  for(i=1;i<tam;i++)
    if(vec[i]<minimo)
      minimo=vec[i];
  
  return minimo;
}
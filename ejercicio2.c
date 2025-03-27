//Arellanes Aniceto Gabriel
// ejercicio2
// Programa que valida si un numero es par o impar
#include<stdio.h>
int main ()
{
  int N;
  printf("Dame un numero:");
  scanf("%i",&N);
  if(N%2 == 0)
  {
    printf("El numero que ingresaste (%d) es par.\n",N);
  }
  else
  {
    printf("El numero que ingresaste (%d) es impar.\n",N);
  }
  printf("\t Fin del programa.\n");
  return 0;
}

//Arellanes Aniceto Gabriel
// ejercicio1
//Programa que valida si "a" es mayor a "b"
#include<stdio.h>
void main ()
{
  int a, b;
  
  printf("Dame un numero:");
  scanf("%i",&a);
  printf("Dame otro numero:");
  scanf("%i",&b);
  if(a > b)
  {
    printf("a (%d) es mayor a b (%d).\n",a,b);
  }
  printf("Fin del programa.\n");
}


//Arellanes Aniceto Gabriel
// ejercicio1
#include<stdio.h>
void main ()
{
  int a, b;
  int op;
  int res;
  printf("Menu\n  1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n 5. Raiz Cuadrada\n 6. Potencia\n 0. Salir\n");
  printf("Selecciona la operacion que quieres realizar: ");
  scanf (%i,&op);
  while (op>0 || op<6)
    {
  switch(op)
  {
    case 1;
    printf("SUMA \n");
    printf("Dame un numero:");
    scanf("%i",&a);
    printf("Dame otro numero:");
    scanf("%i",&b);
    res = a+b;
    printf("El resultado es: %d",
    
    break;
    case 2;
     printf("RESTA \n");
    break;
    case 3;
     printf("MULTIPLICACION \n");
    
    break;
    case 4;
     printf("DIVISION \n");
    break;
    case 5;
     printf("RAIZ CUADRADA \n");
    break;
    case 6;
     printf("POTENCIA \n");
    break;
    default:
     printf("Opcion no valida\n ");
    printf("Menu\n  1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n 5. Raiz Cuadrada\n 6. Potencia\n 0. Salir\n");
    printf("Selecciona la operacion que quieres realizar: ");
    scanf (%i,&op);
  }
 printf("\t Fin del programa.\n");
    }
}

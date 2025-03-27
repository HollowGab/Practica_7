//Arellanes Aniceto Gabriel
// ejercicio1
#include<stdio.h>
#include<math.h>
void main ()
{
  int a, b;
  int op;
  int res;
  do
    {
  printf("Menu\n  1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n 5. Raiz Cuadrada\n 6. Potencia\n 0. Salir\n");
  printf("Selecciona la operacion que quieres realizar: ");
  scanf ("%i",&op);
    }
  while (op>0 || op<6)
    {
    do
      {
  switch(op)
  {
    case 1:
    printf("SUMA \n");
    printf("Dame un numero:");
    scanf("%i",&a);
    printf("Dame otro numero:");
    scanf("%i",&b);
    res= a+b;
    printf("El resultado es: %d",res);
    break;
    
    case 2:
    printf("RESTA \n");
    printf("Dame un numero:");
    scanf("%i",&a);
    printf("Dame otro numero:");
    scanf("%i",&b);
    res= a-b;
    printf("El resultado es: %d",res);
    break;
    
    case 3:
    printf("MULTIPLICACION \n");
    printf("Dame un numero:");
    scanf("%i",&a);
    printf("Dame otro numero:");
    scanf("%i",&b);
    res= a*b;
    printf("El resultado es: %d",res);
    
    break;
    
    case 4:
    printf("DIVISION \n");
    printf("Dame un numero:");
    scanf("%i",&a);
    printf("Dame otro numero:");
    scanf("%i",&b);
    res= a/b;
    printf("El resultado es: %d",res);
    break;
    
    case 5:
    printf("RAIZ CUADRADA \n");
    printf("Dame el numero del que quieres su raiz:");
    scanf("%i",&a);
    res= sqrt(a);
    printf("El resultado es: %d",res);
    break;
    
    case 6:
    printf("POTENCIA \n");
    printf("Dame la base:");
    scanf("%i",&a);
    printf("Dame el exponente:");
    scanf("%i",&b);
    res= pow(a,b);
    printf("El resultado es: %d",res);
    break;
   
    default:
     printf("Opcion no valida\n ");
  
  }
      }
    }
}

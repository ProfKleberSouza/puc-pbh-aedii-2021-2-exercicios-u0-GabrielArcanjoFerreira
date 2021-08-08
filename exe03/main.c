#include <stdio.h>

int main()
{
   int n;

   // Ler número de entrada
   scanf("%i", &n);

   // Imprimir resultado
   printf("NUMERO ");

   if (n % 2 == 0)
   {
      printf("PAR ");
   }
   else
   {
      printf("IMPAR ");
   }

   if (n < 0)
   {
      printf("NEGATIVO");
   }
   else
   {
      printf("POSITIVO");
   }

   return 0;
}
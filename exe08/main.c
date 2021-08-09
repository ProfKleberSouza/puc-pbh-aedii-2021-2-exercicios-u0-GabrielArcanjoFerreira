#include <stdio.h>

int main()
{
   int n;

   // Loop de leitura das entradas
   scanf("%i", &n);
   while (n != 0)
   {
      if (n > 0)
      {
         printf("POSITIVO");
      }
      else
      {
         printf("NEGATIVO");
      }

      scanf("%i", &n);
      if (n != 0)
      {
         printf("\n");
      }
   }

   return 0;
}
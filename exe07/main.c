#include <stdio.h>

int main()
{
   int n, maior, menor, num;

   // Ler número de entradas e definir vetor
   scanf("%i", &n);

   // Ler as N entradas e calcular maior e mnor
   for (int count = 0; count < n; count++)
   {
      scanf("%i", &num);
      if (count == 0)
      {
         maior = num;
         menor = num;
      }
      else
      {
         if (num > maior)
         {
            maior = num;
         }
         else if (num < menor)
         {
            menor = num;
         }
      }
   }

   // Imprimir saída
   printf("MENOR = %i\nMAIOR = %i", menor, maior);
}
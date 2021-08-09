#include <stdio.h>

int main()
{
   int vet[10];

   // Ler entradas
   for (int i = 0; i < 10; i++)
   {
      scanf("%i", &vet[i]);
   }

   // Imprimir saída
   for (int j = 9; j >= 0; j--)
   {
      printf("%i\n", vet[j]);
   }

   return 0;
}
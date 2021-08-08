#include <stdio.h>

int main()
{
   int n1, n2, n3, maior, menor;

   // Ler entradas
   scanf("%i %i %i", &n1, &n2, &n3);

   // Verificar maior e menor
   if (n1 >= n2 && n1 >= n3)
   {
      maior = n1;
   }
   else if (n2 >= n1 && n2 >= n3)
   {
      maior = n2;
   }
   else if (n3 >= n1 && n3 >= n2)
   {
      maior = n3;
   }

   if (n1 <= n2 && n1 <= n3)
   {
      menor = n1;
   }
   else if (n2 <= n1 && n2 <= n3)
   {
      menor = n2;
   }
   else if (n3 <= n1 && n3 <= n2)
   {
      menor = n3;
   }

   // Imprimir saída
   printf("MENOR = %i\nMAIOR = %i", menor, maior);

   return 0;
}
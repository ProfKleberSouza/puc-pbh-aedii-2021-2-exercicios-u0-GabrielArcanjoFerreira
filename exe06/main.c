#include <stdio.h>

int main()
{
   int l1, l2, l3;

   // Ler entradas
   scanf("%i %i %i", &l1, &l2, &l3);

   // Verificar se triângulo
   if (l1 < (l2 + l3) && l2 < (l1 + l3) && l3 < (l2 + l1))
   {
      // Se triângulo
      if (l1 == l2 && l2 == l3)
      {
         // Equilátero
         printf("TRIANGULO EQUILATERO");
      }
      else if (l1 == l2 || l1 == l3 || l2 == l3)
      {
         // Isósceles
         printf("TRIANGULO ISOSCELES");
      }
      else
      {
         printf("TRIANGULO ESCALENO");
      }
   }
   else
   {
      printf("OS LADOS NAO FORMAM UM TRIANGULO");
   }

   return 0;
}
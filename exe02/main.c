#include <stdio.h>

int main()
{
   int R, V, T, D, L;

   // Leitura das entradas
   scanf("%i %i %i", &T, &V, &R);
   D = V * T;
   L = D / R;

   // Print do resultado
   printf("R = %i\nV = %i\nT = %i\nD = %i\nL = %i\n", R, V, T, D, L);
}
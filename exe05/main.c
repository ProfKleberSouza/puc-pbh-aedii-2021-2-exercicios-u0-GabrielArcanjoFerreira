#include <stdio.h>
#include <string.h>

float calcularMedia(float notas[])
{
   /*
   Cacula média de 4 notas
   */
   float soma = 0.0;

   for (int i = 0; i <= 3; i++)
   {
      soma += notas[i];
   }

   return soma / 4.0;
}

int main()
{
   float notas[4], media;
   char status[15];

   // Ler entradas
   scanf("%f %f %f %f", &notas[0], &notas[1], &notas[2], &notas[3]);

   // Chamada da função para cálculo da média
   media = calcularMedia(notas);

   // Verficar se aluno aprovado ou reprovado
   if (media >= 6)
   {
      strcpy(status, "APROVADO");
   }
   else
   {
      strcpy(status, "REPROVADO");
   }

   // Imprimir resultado
   printf("NOTA = %.1f (%s)", media, status);

   return 0;
}
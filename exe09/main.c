#include <stdio.h>
#include <string.h>
typedef struct
{
   float nota;
   char nome[100];
} Aluno;

void calculaMedia(Aluno alunos[], int N)
{
   float media = 0.0;

   // Calcula média
   for (int aluno = 0; aluno < N; aluno++)
   {
      media += alunos[aluno].nota;
   }
   media /= (float)N;

   printf("NOTA MEDIA = %.1f\n", media);
}

void calculaTresMelhoresAlunos(Aluno todosAlunos[], Aluno tresMelhoresAlunos[3], int N)
{
   Aluno alunoAux;

   // Ordenar as notas
   for (int i = 0; i < N; i++)
   {
      for (int j = i + 1; j < N; j++)
      {
         if (todosAlunos[j].nota > todosAlunos[i].nota)
         {
            // Troca posições
            alunoAux = todosAlunos[i];
            todosAlunos[i] = todosAlunos[j];
            todosAlunos[j] = alunoAux;
         }
      }
   }

   tresMelhoresAlunos[0] = todosAlunos[0];
   tresMelhoresAlunos[1] = todosAlunos[1];
   tresMelhoresAlunos[2] = todosAlunos[2];

   // Ordenar alfabeticamente
   for (int i = 0; i < 3; i++)
   {
      for (int j = i + 1; j < 3; j++)
      {
         if (strcmp(todosAlunos[j].nome, todosAlunos[i].nome) < 0)
         {
            // Troca posições
            alunoAux = tresMelhoresAlunos[i];
            tresMelhoresAlunos[i] = tresMelhoresAlunos[j];
            tresMelhoresAlunos[j] = alunoAux;
         }
      }
   }

   printf("%s %.1f\n", tresMelhoresAlunos[0].nome, tresMelhoresAlunos[0].nota);
   printf("%s %.1f\n", tresMelhoresAlunos[1].nome, tresMelhoresAlunos[1].nota);
   printf("%s %.1f", tresMelhoresAlunos[2].nome, tresMelhoresAlunos[2].nota);
}

int main()
{
   int N;
   char nome[100];
   Aluno tresMelhoresAlunos[3];

   // Ler número de alunos e instanciar vetor
   scanf("%i", &N);
   Aluno alunos[N];

   // Loop para preenchimento do array de alunos
   for (int aluno = 0; aluno < N; aluno++)
   {
      scanf("%s %f", nome, &alunos[aluno].nota);
      strcpy(alunos[aluno].nome, nome);
   }

   // Calcula média e ordena alunos
   calculaMedia(alunos, N);
   calculaTresMelhoresAlunos(alunos, tresMelhoresAlunos, N);

   return 0;
}
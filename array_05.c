#include <stdio.h>
int main()
{
  int vetor[3];
  int i;

  printf("Digite as notas do vetor:\n");
  for (i = 0;i < 3; i++) {
    printf("nota %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }
printf("\n");
  for (i = 0; i < 3; i++) {
    printf("nota %d: %d\n", i + 1, vetor[i]);
  }
  int soma = vetor[0] + vetor[1] + vetor[2];
  float media = soma / 3;
  printf("A media das notas e: %.1f", media);
  if (media >= 7) {
    printf("\naprovado");
  }
  if (media >= 5 && media < 7) {
    printf("\nrecuperacao");
  }
  if (media < 5) {
    printf("\nreprovado");
  }
 return 0;
}
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

  for (i = 0; i < 3; i++) {
    printf("nota %d: %d\n", i + 1, vetor[i]);
  }
 return 0;
}
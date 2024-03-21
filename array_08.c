#include <stdio.h>
int main()
{
  int idade[5];
  char nome[5][200];
  int i;
  printf("Digite os elementos do vetor:\n");
  for (i = 0; i < 5; i++) {
    printf("idade %d: ", i + 1);
    scanf("%d", &idade[i]);
    printf("nome %d: ", i + 1);
    scanf("%s", nome[i]);
  }
  printf("\n");
  for (i = 0; i < 5; i++) {
    printf("idade %d: %d\n", i + 1, idade[i]);
    printf("nome %d: %s\n", i + 1, nome[i]);
  }
 return 0;
}
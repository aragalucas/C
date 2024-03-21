#include <stdio.h>
int main()
{
  int numeros[5];
  int i;
  printf("Digite os elementos do vetor:\n");
  for (i = 0; i < 5; i++) {
    printf("numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
    if (numeros[i] < 0) {
      numeros[i] = 0;
    }
  }
  printf("\n");
  for (i = 0; i < 5; i++) {
    printf("numero %d: %d\n", i + 1, numeros[i]);
  }
 return 0;
}
#include <stdio.h>
int main()
{
  int vetor[5];
  int i;
  int menorNumero = 200;
  int maiorNumero = 0;
  printf("Digite os elementos do vetor:\n");
  for (i = 0;i < 5; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor[i]);
    if (menorNumero < vetor[i]) {
      menorNumero = menorNumero;
    } else {
      menorNumero = vetor[i];
    }
    if (maiorNumero > vetor[i]) {
      maiorNumero = maiorNumero;
    } else {
      maiorNumero = vetor[i];
    }
  }

  for (i = 0; i < 5; i++) {
    printf("Elemento %d: %d\n", i + 1, vetor[i]);
  }
  printf("maior numero: %d\n", maiorNumero);
  printf("menor numero: %d\n", menorNumero);
 return 0;
}
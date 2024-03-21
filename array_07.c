#include <stdio.h>
int main()
{
  int vetor[6];
  int i;
  int par = 0;
  int impar = 0;
  printf("Digite os elementos do vetor:\n");
  for (i = 0;i < 5; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  printf("\n");
  for (i = 0; i < 5; i++) {
    printf("Elemento %d: %d\n", i + 1, vetor[i]);
    if (vetor[i] %2 == 0){
      par ++;
  } else {
    impar ++;
  }
  }
  printf("numeros pares: %d\n", par);
  printf("numeros impares: %d\n", impar);
 return 0;
}
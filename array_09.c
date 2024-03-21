#include <stdio.h>
int main()
{
  int numeros[10];
  int i;
  int numeroNegativo = 0;
  int numeroPositivo = 0;
  printf("Digite os elementos do vetor:\n");
  for (i = 0; i < 10; i++) {
    printf("numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
    if (numeros[i] < 0) {
      numeroNegativo ++;
    } else {
      numeroPositivo += numeros[i];
    }
  }
  printf("\n");
  for (i = 0; i < 10; i++) {
    printf("numero %d: %d\n", i + 1, numeros[i]);
  }
  printf("Quantidade de numeros negativos: %d\n", numeroNegativo);
  printf("Soma dos numeros positivos: %d\n", numeroPositivo);
 return 0;
}
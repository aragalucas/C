#include <stdio.h>

int main(void) {
  int i;
  float notas, soma = 0, media;
  for (i = 0; i < 4; i++) {
    printf("nota: ");
    scanf("%f", &notas);
    soma = soma + notas;
  }
  media = soma / 4;
  printf("%.1f\n", media);
  return 0;
}
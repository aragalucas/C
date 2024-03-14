#include <stdio.h>
int main(void) {
  int numero;
  float soma;
  float media;
  int vezes = 0;
  printf("digite um numero: ");
  scanf("%i", &numero);
  while (numero > 0) {
  soma = soma + numero;
  vezes ++;
  printf("digite um numero: ");
  scanf("%i", &numero);
  }
  media = soma / vezes;
  printf("a media é: %.1f", media);
  return 0;
}
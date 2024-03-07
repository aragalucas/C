#include <stdio.h>
float somar (float primeiroNumero, float segundoNumero) {
  return primeiroNumero + segundoNumero;
}
int main() {
  float numeroUm;
  float numeroDois;
  printf("digite o primeiro numero: ");
  scanf("%f",&numeroUm);
  printf("digite o segundo numero: ");
  scanf("%f",&numeroDois);
  float adicao = somar(numeroUm, numeroDois);
  float subtracao = numeroUm - numeroDois;
  float multiplicacao = numeroUm * numeroDois;
  float divisao = numeroUm / numeroDois;
  printf("soma: %.1f\n",adicao);
  printf("subtracao: %.1f\n",subtracao);
  printf("multiplicacao: %.1f\n",multiplicacao);
  printf("divisao: %.1f\n",divisao);
  return 0;
}
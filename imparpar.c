#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "");
  int numeroUM;
  int numeroDois;
  int numeroTres;
  int numeroQuatro;
  int numeroCinco;
  printf("numero um: ");
  scanf("%i",&numeroUM);
  printf("numero dois: ");
  scanf("%i",&numeroDois);
  printf("numero tres: ");
  scanf("%i",&numeroTres);
  printf("numero quatro: ");
  scanf("%i",&numeroQuatro);
  printf("numero cinco: ");
  scanf("%i",&numeroCinco);
  if (numeroUM % 2 == 0) {
    printf("\nnumero um é par");
  } else {
    printf("\nnumero um é impar");
  }
  if (numeroDois % 2 == 0) {
    printf("\nnumero dois é par");
  } else {
    printf("numero dois é impar");
  }
  if (numeroTres % 2 == 0)
  {
    printf("\nnumero tres é par");
  } else {
    printf("\nnumero tres é impar");
  }
  if (numeroQuatro % 2 == 0) {
    printf("\nnumero quatro é par");
  } else {
    printf("\nnumero quatro é impar");
  }
  if (numeroCinco % 2 == 0) {
    printf("\nnumero cinco é par");
  } else {
    printf("\nnumero cinco é impar");
  }
  return 0;
}
#include <locale.h>
#include <stdio.h> 
#include <stdlib.h> 
int main() {
  int i;
  int numero;
  for(i = 1; i < 6; i++) {
  printf("digite o numero %i: ", i);
  scanf("%i",&numero);
    if (numero % 2 == 0) {
      printf("numero %i par\n\n", i);
    } else {
      printf("numero %i é impar\n\n", i);
    }
  }
  return 0;
}
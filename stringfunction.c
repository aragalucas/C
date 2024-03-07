#include <stdio.h>
char* verificarParOuImpar(int numero) {
  char resposta[200];

  if (numero % 2 == 0)
    strcpy(resposta, "Par");
  else
    strcpy(resposta, "Impar");

  return resposta;
}
int main(void) {
  return 0;
}
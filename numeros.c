#include <stdio.h>
int main()
{
int numeros;
int par = 0;
int impar = 0;
int positivos = 0;
int negativos = 0;
int total = 0;
printf("numero: ");
scanf("%i",&numeros);
  while (numeros != 0) {
    if (numeros % 2 == 0) {
      par ++;
    } else {
      impar ++;
    }
    if (numeros > 0) {
      positivos ++;
    } else {
      negativos ++;
    }
    total ++;
    printf("numero: ");
    scanf("%i",&numeros);
  }
  printf("\nquantidade pares: %i", par);
  printf("\nquantidade impares: %i", impar);
  printf("\nquantidade positivos: %i", positivos);
  printf("\nquantidade negativos: %i", negativos);
  printf("\nquantidade total: %i", total);
 return 0;
}
#include <stdio.h>

int main()
{
    int numero;
do 
{
    printf("numero: ");
    scanf("%i", &numero);
}while (numero < 0 || numero > 10);
    return 0;
}
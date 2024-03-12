#include <stdio.h>

int main()
{
    int numero;
    int numeroDois;
do 
{
    printf("numero: ");
    scanf("%i", &numero);
    printf("numero dois: ");
    scanf("%i", &numeroDois);
}while (numeroDois < 0 || numeroDois > 10 || numero < 0 || numero > 10);
    return 0;
}
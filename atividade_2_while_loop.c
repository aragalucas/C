#include <stdio.h>
#include <stdlib.h>
float mediafuncao (float adicao) {
return adicao / 2;
}
int main()
{
    int numero;
    float soma;
    float media;
    int vezes = 0;
    int vezesPar = 0;
    int vezesImpar = 0;
    float somaPares;
    float mediaPares;
   printf("digite um numero: ");
   scanf("%i", &numero);
    while (numero != 0) {
    soma = soma + numero;
    vezes ++;
    if (numero % 2 == 0) {
    vezesPar ++;
    somaPares = somaPares + numero;
    } else {
    vezesImpar ++;
    }
    
    printf("digite um numero: ");
    scanf("%i", &numero);
    }
    media = soma / vezes;
    mediaPares = somaPares / vezesPar;
    printf("\nquantidade: impar %i par %i", vezesImpar, vezesPar);
    printf("\nmedia dos valores pares: %f", mediaPares);
    printf("\na media geral é: %.1f", media);
    return 0;
}
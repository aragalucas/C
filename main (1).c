#include <locale.h>
#include <stdio.h> 
#include <stdlib.h> 
void cabecalho () {
    system("clear");
    printf("=========senai=========");
}
int main()
{
    setlocale(LC_ALL, "");
    cabecalho();
    char nome[200];
    int idade;
    float primeiraNota;
    float segundaNota;
    float terceiraNota;
    float quartaNota;
    printf("\ndigite seu nome: ");
    scanf("%s",&nome);
    cabecalho();
    printf("\ndigite sua idade: ");
    scanf("%i",&idade);
    cabecalho();
    printf("\ndigite sua primeira nota: ");
    scanf("%f",&primeiraNota);
    cabecalho();
    printf("\ndigite sua segunda nota: ");
    scanf("%f",&segundaNota);
    cabecalho();
    printf("\ndigite sua terceira nota: ");
    scanf("%f",&terceiraNota);
    cabecalho();
    printf("\ndigite sua quarta nota: ");
    scanf("%f",&quartaNota);
    cabecalho();
    float soma = primeiraNota + segundaNota + terceiraNota + quartaNota;
    float media = soma / 4;
    printf("\n---dados do usuario---");
    printf("\nnome: %s", nome);
    printf("\nidade %i", idade);
    printf("\nprimeira nota: %.1f", primeiraNota);
    printf("\nsegunda nota: %.1f", segundaNota);
    printf("\nterceira nota: %.1f", terceiraNota);
    printf("\nquarta nota: %.1f", quartaNota);
    printf("\nmedia: %.1f", media);
    if (media >= 7) {
        printf("\naprovado");
    } else {
        printf("\nreprovado");
    }
    return 0;
}
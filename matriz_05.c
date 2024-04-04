#include <stdio.h>
#include <locale.h>
int main (){ 
    setlocale(LC_ALL, "");
    char disciplinas[2][200];
    float notas[2][3];
    float soma = 0, media[4];
    int i, j;
    for (i = 0; i < 3; i++) {
        printf("Digite o nome da %iª disciplina:\n", i+1);
        scanf("%s",&disciplinas[i]);
        for (j = 0; j < 2; j++) {
            printf("Digite a %iª nota: ", j +1);
            scanf("%f",&notas[i][j]);
            soma += notas[i][j];
        }
        media[i] = soma / j;
        soma = 0;
        printf("\n");
      }
        for (i = 0; i < 3; i++) {
            printf("%iª disciplina: %s \n", i+1, disciplinas[i]);
            for (j = 0; j < 2; j++) {
                printf("%iª nota: %.1f \n", j+1, notas[i][j]);
            }
            printf("Média da %iª disciplina: %.1f \n", i + 1, media[i]);
            printf("\n");
        }
      return 0;
      }
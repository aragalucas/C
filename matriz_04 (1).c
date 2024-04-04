#include <stdio.h>
#include <locale.h>
int main (){ 
    setlocale(LC_ALL, "");
    char alunos[2][200];
    float notas[2][3];
    float soma = 0, media[4];
    int i, j;
    for (i = 0; i < 4; i++) {
        printf("Digite o nome do %iº aluno:\n", i+1);
        scanf("%s",&alunos[i]);
        for (j = 0; j < 3; j++) {
            printf("Digite a %iª nota: ", j +1);
            scanf("%f",&notas[i][j]);
            soma += notas[i][j];
        }
        media[i] = soma / j;
        soma = 0;
        printf("\n");
    }
    for (i = 0; i < 4; i++) {
        printf("%iº aluno %s \n", i+1, alunos[i]);
        for (j = 0; j < 3; j++) {
            printf("%iª nota: %.1f \n", j+1, notas[i][j]);
        }
        printf("Média do %iº aluno: %.1f \n", i + 1, media[i]);
        printf("\n");
    }
  return 0;
}
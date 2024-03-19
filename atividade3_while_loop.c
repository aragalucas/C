#include <stdio.h>
int main()
{
    int codigo;
    int idade;
    char sexo;
    float salario;
    float somaSalario;
    float mediaSalario;
    int vezes;
    int menorIdade = 200;
    int maiorIdade = 0;
    int idadePassada;
    int quantidade = 0;
    printf("1 | adicionar pessoa");
    printf("\n2 | exibir resultados\n");
    printf("\ncodigo: ");
    scanf("%i", &codigo);
    while (codigo != 2) {
    printf("\nidade: ");
    scanf("%i", &idade);
    if (menorIdade < idade) {
      menorIdade = menorIdade;
    } else {
      menorIdade = idade;
      }
    if (maiorIdade > idade) {
      maiorIdade = maiorIdade;
    } else {
      maiorIdade = idade;
      }
    printf("\nsexo: ");
    scanf("%s", &sexo);
    printf("\nsalario: ");
    scanf("%f", &salario);
    if (salario >= 5000 && sexo == 
    'F') {
    quantidade ++;
    }
    somaSalario += salario;
    vezes ++;
    printf("\n1 | adicionar pessoa");
    printf("\n2 | exibir resultados\n");
    printf("\ncodigo: ");
    scanf("%i", &codigo);
    }
    mediaSalario = somaSalario / vezes;
    printf("media dos salários %.1f", mediaSalario);
    printf("\nmenor idade: %i", menorIdade);
    printf("\nmaior idade: %i", maiorIdade);
    printf("\nquantidade de mulheres com salario a partir de 5000: %i", quantidade);
}
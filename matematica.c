#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
    float numero;
    float numeroDois;
    printf("Digite um numero: ");
    scanf("%f",&numero);
    printf("Digite outro numero: ");
    scanf("%f",&numeroDois);
    float soma = numero + numeroDois;
    float subtracao = numero - numeroDois;
    float multiplicacao = numero * numeroDois;
    float divisao = numero / numeroDois;
    printf("\na soma dos numeros deu: %.1f", soma);
    printf("\na subtra�� dos numeros deu: %.1f", subtracao);
    printf("\na multipica��o dos numeros deu: %.1f", multiplicacao);
    printf("\na divis�o dos numeros deu: %.1f", divisao);
    return 0;
}

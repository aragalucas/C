int main()
{
    int numero;
    int numeroDois;
    printf("Digite um numero: ");
    scanf("%i",&numero);
    printf("Digite outro numero: ");
    scanf("%i",&numeroDois);
    int soma = numero + numeroDois;
    int subtracao = numero - numeroDois;
    int multiplicacao = numero * numeroDois;
    int divisao = numero / numeroDois;
    printf("\na soma dos numeros deu: %i", soma);
    printf("\na subtra�� dos numeros deu: %i", subtracao);
    printf("\na multipica��o dos numeros deu: %i", multiplicacao);
    printf("\na divis�o dos numeros deu: %i", divisao);
    return 0;
}

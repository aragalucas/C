#include <stdio.h>
int main() {
	int i;
	int numeroEscolhido;
	printf("escolha um numero: ");
	scanf("%i",&numeroEscolhido);
	for (i = 0; i <= 10; i++) {
		printf("%i * %i = %i\n", numeroEscolhido, i, numeroEscolhido * i);
	}
return 0;
}

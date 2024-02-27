/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%i",&numero);
    int sucessor = numero + 1;
    int antecessor = numero - 1;
    printf("\nsucessor: %i", sucessor);
    printf("\nantecessor: %i", antecessor);
    return 0;
}

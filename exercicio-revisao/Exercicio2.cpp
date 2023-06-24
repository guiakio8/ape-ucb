#include <stdio.h>
#include <stdlib.h>

/* Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre
elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

 */

int main(int argc, char *argv[]) {
	
	int A, B, SOMA;
	
	//printf("Digite o valor A: ");
	scanf("%d", &A);
	//printf("\nDigite o valor de B: ");
	scanf("%d", &B);
	
	SOMA = A + B;
	printf("X = %d", SOMA);
	
	
	return 0;
}
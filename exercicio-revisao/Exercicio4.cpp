#include <stdio.h>
#include <stdlib.h>

/* Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D)

 */

int main(int argc, char *argv[]) {
	
	int A, B, C, D, DIFERENCA;
	
	//printf("Digite o valor A: ");
	scanf("%d", &A);
	//printf("\nDigite o valor de B: ");
	scanf("%d", &B);
	//printf("Digite o valor C: ");
	scanf("%d", &C);
	//printf("\nDigite o valor de D: ");
	scanf("%d", &D);
	
	DIFERENCA = (A * B - C * D);
	printf("DIFERENCA = %d", DIFERENCA);
	return 0;
}
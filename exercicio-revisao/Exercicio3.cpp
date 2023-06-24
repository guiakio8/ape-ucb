#include <stdio.h>
#include <stdlib.h>

/* Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua
esta operação à variável PROD. A seguir mostre a variável PROD com mensagem
correspondente.
 */

int main(int argc, char *argv[]) {
	
	int A, B, PROD;
	
	//printf("Digite o valor A: ");
	scanf("%d", &A);
	//printf("\nDigite o valor de B: ");
	scanf("%d", &B);
	
	PROD = A * B;
	printf("PROD = %d", PROD);
	return 0;
}
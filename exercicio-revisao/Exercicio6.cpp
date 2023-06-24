#include <stdio.h>
#include <stdlib.h>

/* Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor
unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário
de cada peça 2. Após, calcule e mostre o valor a ser pago.
 */

int main(int argc, char *argv[]) {
	
	int cd1, cd2, num1, num2;
	float valor1, valor2, total, valorPpeca1, valorPpeca2;
	
	// PEÇA 1
//	printf("Digite o codigo da peca 1: ");
	scanf("%d", &cd1);
//	printf("Digite o numero de pecas 1: ");
	scanf("%d", &num1);
//	printf("Digite o valor da peca 1: ");
	scanf("%f", &valor1);
	
	// PEÇA 2
//	printf("Digite o codigo da peca 2: ");
	scanf("%d", &cd2);
//	printf("Digite o numero de pecas 2: ");
	scanf("%d", &num2);
//	printf("Digite o valor da peca 2: ");
	scanf("%f", &valor2);
	
	valorPpeca1 = valor1 * num1;
	valorPpeca2 = valor2 * num2;
	total = valorPpeca1 + valorPpeca2;
	
	printf("VALOR A PAGAR: R$%.2f", total);
	
	return 0;
}
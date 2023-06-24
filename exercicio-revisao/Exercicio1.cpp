#include <stdio.h>
#include <stdlib.h>

/* Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo
apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo
especificado
*/

int main(int argc, char *argv[]) {
	
	int A, B, X;
	
	//printf("Digite o valor A: ");
	scanf("%d", &A);
	//printf("\nDigite o valor de B: ");
	scanf("%d", &B);
	
	X = A + B;
	printf("X = %d", X);
	
	
	return 0;
}
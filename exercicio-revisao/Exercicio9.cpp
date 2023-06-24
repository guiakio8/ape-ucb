#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

/* Faça um algoritmo que leia dois números A e B e imprima o maior deles.
|  Exemplos de entrada | Eemplos de saída
|           5 3        |         5
|           3 1        |         3
|         18 1800      |       1800

*/

int main() {

	int A, B;
	
	scanf("%d",&A);
	scanf("%d",&B);
	
	if (A > B)
		printf("%d", A);
	else
		printf("%d", B);
	
return 0;

}

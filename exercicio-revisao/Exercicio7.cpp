#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

/* Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o
valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3
. Considere
(atribua) para pi o valor 3.14159.

 */

int main(int argc, char *argv[]) {
	
	float raio, volume;
	
//	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	volume = (4/3) * PI * pow(raio,3);
	
	printf("VOLUME = %.2f", volume);
	
	return 0;
}
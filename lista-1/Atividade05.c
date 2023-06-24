#include <stdio.h>
#include <stdlib.h>

/* 5. Desenvolva um programa que calcula a metragem quadrada de um
terreno, usando o teste no final para criar a opção de digitar novos
valores sem sair do programa.
O programa deverá pedir ao usuário para digitar a metragem1 do terreno,
a metragem 2 e em seguida mostrar o tamanho total do terreno em
metros quadrados. O programa deverá perguntar ao usuário se ele quer
continuar para digitar outras metragens ou encerrar o programa.

 */

int main() {

	int altura, largura, conti;
	
	do {
		printf("Informe a largura da area do terreno: ");
		scanf("%d", &largura);
		printf("Informe a altura da area do terreno: ");
		scanf("%d", &altura);
		
		printf("O tereno possui %d metros quadrados!", largura*altura);
		
		printf("\nDeseja fazer outro calculo de terreno? [1/0] - "); //poderia fazer um char para pegar sim ou nao/ [s/n]
		fflush(stdin);
		scanf("%d", &conti);
		fflush(stdin);
		
	} while (conti);
	
	
return 0;


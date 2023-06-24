#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15%
de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês

*/

int main(int argc, char *argv[]) {
	
	char nome[50];
	float sal, vendas, total, comi;
	
	//printf("Digite o nome do vendedor: ");
	fflush(stdin);
	scanf("%s", &nome);
	
	//printf("\nDigite o salario fixo: ");
	scanf("%f", &sal);
	//printf("Digite o valor ganhado nas vendas: ");
	scanf("%f", &vendas);
	
	comi = vendas * 0.15;
	total = comi + sal;
	
	printf("Total = R$%.2f", total);
	
	return 0;
}
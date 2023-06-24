#include <stdio.h>
#include <stdlib.h>

/* Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda de
um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor vendido. Se
o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo
extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%.
Escreva um algoritmo que gere um relatório contendo nome, valor da venda e
comissão de cada um dos corretores. O relatório deve mostrar também o total de
vendas da empresa.
|  Exemplos de entrada |  Exemplos de saída|
|            4         |        F1         |
|           11         |        F2         |
|          420         |        F3         |

 */

int main() {

	char nomeCorretor1[50], nomeCorretor2[50], nomeCorretor3[50];
float valorVenda1, valorVenda2, valorVenda3;
float comissaoCorretor1, comissaoCorretor2, comissaoCorretor3;
float totalVendasEmpresa;

printf("Digite o nome do corretor 1: ");
scanf("%s", nomeCorretor1);
printf("Digite o valor da venda do corretor 1: R$ ");
scanf("%f", &valorVenda1);

printf("Digite o nome do corretor 2: ");
scanf("%s", nomeCorretor2);
printf("Digite o valor da venda do corretor 2: R$ ");
scanf("%f", &valorVenda2);

printf("Digite o nome do corretor 3: ");
scanf("%s", nomeCorretor3);
printf("Digite o valor da venda do corretor 3: R$ ");
scanf("%f", &valorVenda3);

if (valorVenda1 > 50000.0) {
    comissaoCorretor1 = valorVenda1 * 0.12;
} else if (valorVenda1 >= 30000.0 && valorVenda1 <= 50000.0) {
    comissaoCorretor1 = valorVenda1 * 0.095;
} else {
    comissaoCorretor1 = valorVenda1 * 0.07;
}

if (valorVenda2 > 50000.0) {
    comissaoCorretor2 = valorVenda2 * 0.12;
} else if (valorVenda2 >= 30000.0 && valorVenda2 <= 50000.0) {
    comissaoCorretor2 = valorVenda2 * 0.095;
} else {
    comissaoCorretor2 = valorVenda2 * 0.07;
}

if (valorVenda3 > 50000.0) {
    comissaoCorretor3 = valorVenda3 * 0.12;
} else if (valorVenda3 >= 30000.0 && valorVenda3 <= 50000.0) {
    comissaoCorretor3 = valorVenda3 * 0.095;
} else {
    comissaoCorretor3 = valorVenda3 * 0.07;
}

totalVendasEmpresa = valorVenda1 + valorVenda2 + valorVenda3;

printf("\nRELATÓRIO DE VENDAS\n");
printf("Corretor 1: %s\n", nomeCorretor1);
printf("Valor da venda: R$ %.2f\n", valorVenda1);
printf("Comissão: R$ %.2f\n\n", comissaoCorretor1);

printf("Corretor 2: %s\n", nomeCorretor2);
printf("Valor da venda: R$ %.2f\n", valorVenda2);
printf("Comissão: R$ %.2f\n\n", comissaoCorretor2);

printf("Corretor 3: %s\n", nomeCorretor3);  
printf("Valor da venda: R$ %.2f\n", valorVenda3);
printf("Comissão: R$ %.2f\n\n", comissaoCorretor3);

return 0;

}

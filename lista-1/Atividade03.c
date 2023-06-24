/*Elabore um programa que faça o sorteio de vários números e ao final mostra:
a) A quantidade de números sorteados;
b) O Maior numero sorteado;
c) Quantos números pares foram sorteados;
Observação: O programa deve finalizar quando for sorteado o valor 0 (zero)e utilizar no máximo 3 variáveis não utilizar vetores ou matrizes.

*/

#include <stdio.h>

int main() {
    int num, quantidade = 0, maior = 0, pares = 0;
    
    while(1) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if(num == 0) {
            break;
        }
        
        quantidade++;
        
        if(num > maior) {
            maior = num;
        }
        
        if(num % 2 == 0) {
            pares++;
        }
    }
    
    printf("Quantidade de numeros sorteados: %d\n", quantidade);
    printf("Maior numero sorteado: %d\n", maior);
    printf("Quantidade de numeros pares sorteados: %d\n", pares);
    
    return 0;
}

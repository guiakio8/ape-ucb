/*Exercício 6. Faça um algoritmo recebe um valor inteiro e se o número for maior que 10, será impressa a
frase: "O número e maior que 10". Se o número for menor que 10, será impressa a frase:
“O número é menor que 10”. Se o número for igual a 10 aparecerá a frase: “Você acertou”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int numero;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 10) {
        printf("O número é maior que 10.\n");
    } else if (numero < 10) {
        printf("O número é menor que 10.\n");
    } else {
        printf("Você acertou.\n");
    }

    return 0;
} 
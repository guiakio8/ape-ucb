/*
Crie um programa em C que receba três números do usuário depois crie uma função que receba
os 3 números como parâmetros: A, B e C. Ordene de tal forma que, ao final da função, A contenha
o menor número e C o maior. Imprima os três números. Obs: Utilize ponteiro para solucionar o
problema.

// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi

*/

#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c)
{
    int temp;

    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int num1, num2, num3;

    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    printf("Terceiro numero: ");
    scanf("%d", &num3);

    sort(&num1, &num2, &num3);

    printf("Sort: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
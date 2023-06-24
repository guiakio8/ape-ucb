/*
Faça um programa em C que armazene em um vetor 3 valores, e imprima os valores utilizando
notação de ponteiro.
*/
// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[3] = {10, 20, 30};
    int *p;

    p = vet;

    for (int i = 0; i < 3; i++)
    {
        printf("Vetor %d: %d\n", i + 1, *(p + i));
    }

    return 0;
}
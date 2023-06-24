/* Desenvolva um programa em C que contenha um vetor contendo 5 elementos inteiros. Utilizando
apenas notação de ponteiros, leia esse vetor do teclado e imprima o endereço das posições
contendo valores pares.

// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5];
    int *ptr;

    ptr = num;

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o numero da posicao[%d]\n", i + 1);
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < 5; i++)
    {
        if ((*ptr + i) % 2 == 0)
        {
            printf("\nendereco de %d: %p\n", (*ptr + i), ptr + i);
        }
    }

    return 0;
}
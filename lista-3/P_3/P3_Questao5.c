/*
Desenvolva um programa que declare um vetor de inteiros e um ponteiro para inteiros. Associe
o ponteiro ao vetor. Agora, some mais um (+1) a cada posição do vetor usando o ponteiro (use *).
*/

// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {0, 1, 2, 3, 4}, *ptr;

    ptr = v;

    for (int j = 0; j < 5; j++)
    {
        *(ptr + j) = *(ptr + j) + 1;
    }

    for (int j = 0; j < 5; j++)
    {
        printf("\n%d\n", *(ptr + j));
    }

    return 0;
}
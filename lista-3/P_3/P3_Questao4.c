/*Crie uma função que aceite como parâmetro um vetor de inteiros com N valores, e determina o
maior elemento do vetor e o número de vezes que este elemento ocorreu no vetor. Por exemplo,
para um vetor com os seguintes elementos: 3, 5, 12, 6, 7, 27, 9, 16, 27, a função deve retorna para
o programa que a chamou o valor 27 e o número 2 (indicando que o número 27 ocorreu 2 vezes).
A função deve ser do tipo void.*/

// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi

#include <stdio.h>
#include <stdlib.h>

int *retornaMaior(int *v, int t)
{
    static int maior[2] = {0, 0};

    for (int i = 0; i < t; i++)
    {
        if (v[i] > maior[0])
        {
            maior[0] = v[i];
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (v[i] == maior[0])
        {
            maior[1]++;
        }
    }
    return maior;
}

int main()
{
    int *ptr = NULL;
    int valores[5] = {1, 2, 5, 6, 6};

    ptr = retornaMaior(valores, 5);

    printf("maior: %d e repeticoes: %d", ptr[0], ptr[1]);

    return 0;
}
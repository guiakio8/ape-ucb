#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX_PALAVRAS 100
#define MAX_TAMANHO 100


int main() {


/*Programa de digito de palavras para verificacao de tamanho*/

    char palavras[MAX_PALAVRAS][MAX_TAMANHO];
    char maior_palavra[MAX_TAMANHO];
    int tamanho_maior_palavra = 0;
    int num_palavras, i;

    printf("Digite as palavras: (digite ''fim'' para encerrar)\n");

    // ler as palavras digitadas pelo usuário
    num_palavras = 0;
    do {
        scanf("%s", palavras[num_palavras]);
        if (strcmp(palavras[num_palavras], "fim") == 0) { // strcmp usado para comparar strings
            break;
        }
        num_palavras++;
    } while (num_palavras < MAX_PALAVRAS);

    // encontrar a maior palavra
    for (i = 0; i < num_palavras; i++) {
        if (strlen(palavras[i]) > tamanho_maior_palavra) { // strlen usado para pegar o numero de digitos
            tamanho_maior_palavra = strlen(palavras[i]);
            strcpy(maior_palavra, palavras[i]); // strcpy usado para copiar strings
        }
    }
    printf("A maior palavra digitada foi '%s' com %d letras.\n", maior_palavra, tamanho_maior_palavra);

    return 0;
}
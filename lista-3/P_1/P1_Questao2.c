// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi

/*
Crie um programa que armazene 3 nomes numa matriz de strings. Após o
cadastro, você deverá criar um MENU que informe:
1 – Mostra os nomes cadastrados em maiúsculo e na ordem inversa, ou seja,
mostra do último ao primeiro nome cadastrado;
2 – Mostra quantas pessoas com o nome “PAULO” foram cadastradas;
3 - Mostra quantas letras ‘A’ foram cadastradas na matriz de strings;
4 – Mostra quantas letras ‘C’ o segundo nome cadastrado possui.
5 – SAIR
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 3
#define MAX_NAME_LENGTH 50

void cadastrarNomes(char nomes[SIZE][MAX_NAME_LENGTH]) {
    printf("Digite os nomes:\n");

    for (int i = 0; i < SIZE; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }
}

void mostrarNomesEmMaiusculoOrdemInversa(char nomes[SIZE][MAX_NAME_LENGTH]) {
    printf("Nomes cadastrados em maiusculo e ordem inversa:\n");

    for (int i = SIZE - 1; i >= 0; i--) {
        char nomeMaiusculo[MAX_NAME_LENGTH];
        strcpy(nomeMaiusculo, nomes[i]);

        for (int j = 0; j < strlen(nomeMaiusculo); j++) {
            nomeMaiusculo[j] = toupper(nomeMaiusculo[j]);
        }

        printf("%s\n", nomeMaiusculo);
    }
}

int contarNomesIguais(char nomes[SIZE][MAX_NAME_LENGTH], char nomeBusca[MAX_NAME_LENGTH]) {
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        if (strcmp(nomes[i], nomeBusca) == 0) {
            count++;
        }
    }

    return count;
}

int contarLetras(char nomes[SIZE][MAX_NAME_LENGTH], char letra) {
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        int length = strlen(nomes[i]);
        for (int j = 0; j < length; j++) {
            if (toupper(nomes[i][j]) == toupper(letra)) {
                count++;
            }
        }
    }

    return count;
}

int contarLetrasSegundoNome(char nomes[SIZE][MAX_NAME_LENGTH], char letra) {
    int count = 0;

    if (strlen(nomes[1]) == 0) {
        return count;
    }

    for (int i = 0; i < strlen(nomes[1]); i++) {
        if (toupper(nomes[1][i]) == toupper(letra)) {
            count++;
        }
    }

    return count;
}

int main() {
    char nomes[SIZE][MAX_NAME_LENGTH];
    int opcao;

    for (int i = 0; i < SIZE; i++) {
        nomes[i][0] = '\0';
    }

    cadastrarNomes(nomes);

    do {
        printf("\nMENU:\n");
        printf("1 - Mostrar nomes cadastrados em maiusculo e ordem inversa\n");
        printf("2 - Mostrar quantidade de pessoas com o nome 'PAULO'\n");
        printf("3 - Mostrar quantidade de letras 'A' cadastradas\n");
        printf("4 - Mostrar quantidade de letras 'C' no segundo nome cadastrado\n");
        printf("5 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                mostrarNomesEmMaiusculoOrdemInversa(nomes);
                break;

            case 2:
                printf("Quantidade de pessoas com o nome 'PAULO': %d\n", contarNomesIguais(nomes, "PAULO"));
                break;

            case 3:
                printf("Quantidade de letras 'A' cadastradas: %d\n", contarLetras(nomes, 'A'));
                break;

            case 4:
                printf("Quantidade de letras 'C' no segundo nome cadastrado: %d\n", contarLetrasSegundoNome(nomes, 'C'));
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
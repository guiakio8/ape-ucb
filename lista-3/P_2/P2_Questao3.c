// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi

/*
Faça um programa que leia o nome, o time e a quantidade de gols de 3 jogadores
de futebol. Após o cadastro informe:
a) A quantidade total de gols marcados;
b) Quantos jogadores jogam no FLAMENGO;
c) Todos os dados do artilheiro.
*/

#include <stdio.h>
#include <string.h>

struct Jogador {
    char nome[50];
    char time[50];
    int gols;
};

int main() {
    struct Jogador jogadores[3];
    int totalGols = 0;
    int jogadoresFlamengo = 0;
    struct Jogador artilheiro;
    artilheiro.gols = 0;

    for (int i = 0; i < 3; i++) {
        printf("Jogador %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", jogadores[i].nome);

        printf("Time: ");
        scanf("%s", jogadores[i].time);

        printf("Quantidade de gols: ");
        scanf("%d", &jogadores[i].gols);

        totalGols += jogadores[i].gols;

        if (strcmp(jogadores[i].time, "FLAMENGO") == 0) {
            jogadoresFlamengo++;
        }

        if (jogadores[i].gols > artilheiro.gols) {
            strcpy(artilheiro.nome, jogadores[i].nome);
            strcpy(artilheiro.time, jogadores[i].time);
            artilheiro.gols = jogadores[i].gols;
        }
    }

    printf("\nQuantidade total de gols marcados: %d\n", totalGols);
    printf("Quantidade de jogadores que jogam no FLAMENGO: %d\n", jogadoresFlamengo);
    printf("Dados do artilheiro:\n");
    printf("Nome: %s\n", artilheiro.nome);
    printf("Time: %s\n", artilheiro.time);
    printf("Quantidade de gols: %d\n", artilheiro.gols);

    return 0;
}
// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi


#include <stdio.h>
#include <string.h>
#include <locale.h>

/*
1-Faca um programa em C que leia o nome, sexo e o valor da mensalidade de 3 alunos.
Apos a leitura dos dados informe:
a) O valor da menor mensalidade;
b) A quantidade de alunos do sexo masculino ('M');
c) A media das mensalidades;
d) O nome e a idade do aluno mais velho.
*/

// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes

struct Aluno
{
    char nome[50];
    char sexo;
    float mensalidade;
    int idade;
};

int main()
{

    struct Aluno alunos[3];
    float menorMensalidade = 0;
    int quantidadeMasculino = 0;
    float somaMensalidades = 0;
    char alunoMaisVelho[50];
    int idadeMaisVelho = 0;

    int i; // Move a declaracao de i para antes do for

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite o sexo do aluno %d (M/F): ", i + 1);
        scanf(" %c", &alunos[i].sexo);

        printf("Digite o valor da mensalidade do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].mensalidade);

        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);

        // Verifica se e a primeira iteracao ou se a mensalidade atual é menor
        if (i == 0 || alunos[i].mensalidade < menorMensalidade)
        {
            menorMensalidade = alunos[i].mensalidade;
        }

        // Verifica se o sexo é masculino
        if (alunos[i].sexo == 'M')
        {
            quantidadeMasculino++;
        }

        somaMensalidades += alunos[i].mensalidade;

        // Verifica se a idade atual é maior
        if (alunos[i].idade > idadeMaisVelho)
        {
            idadeMaisVelho = alunos[i].idade;
            strcpy(alunoMaisVelho, alunos[i].nome);
        }
    }

    printf("\nValor da menor mensalidade: R$%.2f\n", menorMensalidade);
    printf("Quantidade de alunos do sexo masculino: %d\n", quantidadeMasculino);
    printf("Media das mensalidades: R$%.2f\n", somaMensalidades / 3);
    printf("Aluno mais velho: %s, %d anos\n", alunoMaisVelho, idadeMaisVelho);

    return 0;
}

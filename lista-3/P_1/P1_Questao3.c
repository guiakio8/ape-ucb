// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi

/*
Crie um programa em C que cadastre os dados de 5 alunos. Os dados a serem
cadastrados são: nome, matrícula, endereço, sexo, os nomes das 3 disciplinas e as 3
notas de cada disciplina que ele está cursando.
 Os dados devem ser cadastrados em um vetor e/ou matriz.
 Após o cadastro informe:
 a)Os dados dos alunos cadastrados e a sua situação ("aprovado" ou
"reprovado") em cada disciplina.
 b)Os dados do aluno com maior média em "LPI".
 c)A média geral dos alunos na disciplina "Algoritmo".
 d)A quantidade de alunos(as) reprovados em qualquer disciplina.
OBS.:1) Usar uma estrutura switch para mostrar os resultados calculados.
 2) Para o aluno ser aprovado a média das notas deve ser >= 6 
*/


#include <stdio.h>

#define NUM_ALUNOS 5
#define NUM_DISCIPLINAS 3

struct Aluno {
    char nome[50];
    int matricula;
    char endereco[100];
    char sexo;
    char disciplinas[NUM_DISCIPLINAS][50];
    float notas[NUM_DISCIPLINAS][3];
};

void cadastrarAlunos(struct Aluno alunos[]) {
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Endereco: ");
        scanf("%s", alunos[i].endereco);

        printf("Sexo (M/F): ");
        scanf(" %c", &alunos[i].sexo);

        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            printf("Nome da disciplina %d: ", j + 1);
            scanf("%s", alunos[i].disciplinas[j]);

            for (int k = 0; k < 3; k++) {
                printf("Nota %d da disciplina %d: ", k + 1, j + 1);
                scanf("%f", &alunos[i].notas[j][k]);
            }
        }
    }
}

void mostrarDadosAlunos(struct Aluno alunos[]) {
    printf("Dados dos alunos cadastrados:\n");

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Endereco: %s\n", alunos[i].endereco);
        printf("Sexo: %c\n", alunos[i].sexo);

        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            printf("Disciplina %d: %s\n", j + 1, alunos[i].disciplinas[j]);

            float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2]) / 3.0;
            printf("Media: %.2f\n", media);

            if (media >= 6) {
                printf("Situacao: Aprovado\n");
            } else {
                printf("Situacao: Reprovado\n");
            }
        }
    }
}

void alunoMaiorMediaLPI(struct Aluno alunos[]) {
    int indiceMaiorMedia = 0;
    float maiorMedia = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        float mediaLPI = (alunos[i].notas[0][0] + alunos[i].notas[0][1] + alunos[i].notas[0][2]) / 3.0;

        if (mediaLPI > maiorMedia) {
            maiorMedia = mediaLPI;
            indiceMaiorMedia = i;
        }
    }

    printf("Aluno com maior media em LPI:\n");
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Matricula: %d\n", alunos[indiceMaiorMedia].matricula);
    printf("Endereco: %s\n", alunos[indiceMaiorMedia].endereco);
    printf("Sexo: %c\n", alunos[indiceMaiorMedia].sexo);
    printf("Media LPI: %.2f\n", maiorMedia);
}

void mediaGeralAlgoritmo(struct Aluno alunos[]) {
    float somaMedias = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        somaMedias += (alunos[i].notas[1][0] + alunos[i].notas[1][1] + alunos[i].notas[1][2]) / 3.0;
    }

    float mediaGeral = somaMedias / NUM_ALUNOS;

    printf("Media geral dos alunos na disciplina Algoritmo: %.2f\n", mediaGeral);
}

void contarReprovados(struct Aluno alunos[]) {
    int countReprovados = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2]) / 3.0;

            if (media < 6) {
                countReprovados++;
                break;  // Passa para o próximo aluno
            }
        }
    }

    printf("Quantidade de alunos reprovados em qualquer disciplina: %d\n", countReprovados);
}

int main() {
    struct Aluno alunos[NUM_ALUNOS];

    cadastrarAlunos(alunos);

    int opcao;

    do {
        printf("\nMENU\n");
        printf("1 - Mostrar dados dos alunos cadastrados e situacao em cada disciplina\n");
        printf("2 - Mostrar aluno com maior media em LPI\n");
        printf("3 - Mostrar media geral dos alunos em Algoritmo\n");
        printf("4 - Mostrar quantidade de alunos reprovados em qualquer disciplina\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                mostrarDadosAlunos(alunos);
                break;
            case 2:
                alunoMaiorMediaLPI(alunos);
                break;
            case 3:
                mediaGeralAlgoritmo(alunos);
                break;
            case 4:
                contarReprovados(alunos);
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
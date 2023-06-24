// Guilherme Akio Suguino Sampaio
// Gabriel de Oliveira Batista
// Luca Paes Beraldi

/*
Crie um programa que carregue (armazene) números numa matriz 3 x 3.
Após a leitura dos números, você deverá criar um MENU que ofereça as seguintes
opções:
1 – Mostra a quantidade de números pares armazenados;
2 – Mostra a soma dos números ímpares armazenados;
3 – Mostra o maior e o menor número armazenado;
4 – Mostra a média dos números armazenados;
5 – Mostra a quantidade de números armazenados que são iguais a 10;
6 – Mostra a multiplicação dos números armazenados na diagonal principal
(índice da linha igual ao índice da coluna);
7 – Mostra a soma dos números armazenados que são divisíveis por 5.
8 – Armazena num vetor todos os números menores que 8. Mostrar o vetor
resultante.
9 – Consulta um número na matriz. O usuário deverá informar qual o número
deseja procurar na matriz, caso encontre, informar o número e qual a posição(índices)
na matriz.
10 – SAIR
*/


#include <stdio.h>

#define SIZE 3

void carregarNumeros(int matriz[SIZE][SIZE]) {
    printf("Digite os numeros para a matriz:\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrarMatriz(int matriz[SIZE][SIZE]) {
    printf("Matriz:\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int contarNumerosPares(int matriz[SIZE][SIZE]) {
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}

int somarNumerosImpares(int matriz[SIZE][SIZE]) {
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] % 2 != 0) {
                sum += matriz[i][j];
            }
        }
    }

    return sum;
}

void encontrarMaiorEMenor(int matriz[SIZE][SIZE], int *maior, int *menor) {
    *maior = matriz[0][0];
    *menor = matriz[0][0];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] > *maior) {
                *maior = matriz[i][j];
            }

            if (matriz[i][j] < *menor) {
                *menor = matriz[i][j];
            }
        }
    }
}

float calcularMedia(int matriz[SIZE][SIZE]) {
    int soma = 0;
    int quantidade = SIZE * SIZE;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            soma += matriz[i][j];
        }
    }

    return (float)soma / quantidade;
}

int contarNumerosIguais(int matriz[SIZE][SIZE], int num) {
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] == num) {
                count++;
            }
        }
    }

    return count;
}

int multiplicarDiagonalPrincipal(int matriz[SIZE][SIZE]) {
    int produto = 1;

    for (int i = 0; i < SIZE; i++) {
        produto *= matriz[i][i];
    }

    return produto;
}

int somarDivisiveisPorCinco(int matriz[SIZE][SIZE]) {
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] % 5 == 0) {
                sum += matriz[i][j];
            }
        }
    }

    return sum;
}

void armazenarMenoresQueOito(int matriz[SIZE][SIZE], int vetor[], int *tamanhoVetor) {
    *tamanhoVetor = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] < 8) {
                vetor[(*tamanhoVetor)++] = matriz[i][j];
            }
        }
    }
}

void consultarNumero(int matriz[SIZE][SIZE], int num) {
    int encontrado = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] == num) {
                printf("Numero encontrado: %d\n", num);
                printf("Posicao: linha %d, coluna %d\n", i, j);
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            break;
        }
    }

    if (!encontrado) {
        printf("Numero nao encontrado na matriz.\n");
    }
}

int main() {
    int matriz[SIZE][SIZE];
    int opcao, numero, maior, menor;
    int vetor[SIZE * SIZE];
    int tamanhoVetor;

    carregarNumeros(matriz);

    do {
        printf("\nMENU:\n");
        printf("1 - Mostrar quantidade de numeros pares\n");
        printf("2 - Mostrar soma dos numeros impares\n");
        printf("3 - Mostrar maior e menor numero\n");
        printf("4 - Mostrar media dos numeros\n");
        printf("5 - Mostrar quantidade de numeros iguais a 10\n");
        printf("6 - Mostrar multiplicacao dos numeros na diagonal principal\n");
        printf("7 - Mostrar soma dos numeros divisiveis por 5\n");
        printf("8 - Armazenar numeros menores que 8\n");
        printf("9 - Consultar numero na matriz\n");
        printf("10 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Quantidade de numeros pares: %d\n", contarNumerosPares(matriz));
                break;

            case 2:
                printf("Soma dos numeros impares: %d\n", somarNumerosImpares(matriz));
                break;

            case 3:
                encontrarMaiorEMenor(matriz, &maior, &menor);
                printf("Maior numero: %d\n", maior);
                printf("Menor numero: %d\n", menor);
                break;

            case 4:
                printf("Media dos numeros: %.2f\n", calcularMedia(matriz));
                break;

            case 5:
                printf("Quantidade de numeros iguais a 10: %d\n", contarNumerosIguais(matriz, 10));
                break;

            case 6:
                printf("Multiplicacao dos numeros na diagonal principal: %d\n", multiplicarDiagonalPrincipal(matriz));
                break;

            case 7:
                printf("Soma dos numeros divisiveis por 5: %d\n", somarDivisiveisPorCinco(matriz));
                break;

            case 8:
                armazenarMenoresQueOito(matriz, vetor, &tamanhoVetor);
                printf("Numeros menores que 8: ");
                for (int i = 0; i < tamanhoVetor; i++) {
                    printf("%d ", vetor[i]);
                }
                printf("\n");
                break;

            case 9:
                printf("Digite o numero que deseja consultar: ");
                scanf("%d", &numero);
                consultarNumero(matriz, numero);
                break;

            case 10:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 10);

    return 0;
}
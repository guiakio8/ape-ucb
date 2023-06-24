/*

Elabore um programa que receba como dados de entrada duas notas de vários alunos
e ao final mostra:
a) A quantidade de alunos com media maior ou igual a 7,0;
b) A Menor media da Turma;
c) A Media geral da turma;
d) Quantas vezes o programa rodou;
Observação: O programa deve finalizar quando for digitado o valor 0 (zero) e utilizar no
máximo 6 variáveis não utilizar vetores ou matrizes
*/

#include <stdio.h>

int main() {
    float nota1, nota2, media, menor_media = 10, media_geral = 0;
    int qtd_media_7 = 0, qtd_execucoes = 0;
    
    while (1) {
        printf("Digite as notas do aluno (digite 0 para sair):\n");
        scanf("%f %f", &nota1, &nota2);
        
        if (nota1 == 0 || nota2 == 0) {
            break;
        }
        
        media = (nota1 + nota2) / 2.0;
        media_geral += media;
        qtd_execucoes++;
        
        if (media >= 7.0) {
            qtd_media_7++;
        }
        
        if (media < menor_media) {
            menor_media = media;
        }
    }
    
    printf("\nQuantidade de alunos com media maior ou igual a 7.0: %d\n", qtd_media_7);
    printf("Menor media da turma: %.2f\n", menor_media);
    printf("Media geral da turma: %.2f\n", media_geral / qtd_execucoes);
    printf("Quantidade de vezes que o programa rodou: %d\n", qtd_execucoes);
    
    return 0;
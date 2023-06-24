/* Exercício 5. Faça um programa em C que leia a nota final, o total de presenças e o número total de
aulas ministradas e imprima a nota final, o total de presenças e uma mensagem dizendo se
este aluno foi aprovado ou reprovado. Sabe-se que a freqüência necessária é de no mínimo
75% das aulas ministradas e que a nota mínima deve ser maior ou igual a 6.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float nota_final;
    int total_presencas, total_aulas;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a nota final: ");
    scanf("%f", &nota_final);

    printf("Digite o total de presenças: ");
    scanf("%d", &total_presencas);

    printf("Digite o número total de aulas ministradas: ");
    scanf("%d", &total_aulas);

    float frequencia = ((float)total_presencas / total_aulas) / 100;

    if (frequencia >= 75 && nota_final >= 6.0) {
        printf("Nota final: %.2f\n", nota_final);
        printf("Total de presenças: %d/%d\n", total_presencas, total_aulas);
        printf("Aluno aprovado.\n");
    } else {
        printf("Nota final: %.2f\n", nota_final);
        printf("Total de presenças: %d/%d\n", total_presencas, total_aulas);
        printf("Aluno reprovado.\n");
    }

    return 0;
} 

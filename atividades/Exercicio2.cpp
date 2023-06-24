#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float base, altura, area;

    setlocale(LC_ALL, "Portuguese");

    // Lendo a base e a altura do usuário
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    // Calculando a área
    area = (base * altura) / 2;

    // Exibindo a área
    printf("A área do triângulo é: %2.f\n", area);

    return 0;
} 

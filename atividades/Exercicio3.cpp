#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int idade;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 30) {
        printf("Você é muito jovem.\n");
    }

    return 0;
} 

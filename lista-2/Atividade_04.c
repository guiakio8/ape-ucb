#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TAMANHO 100

    // Esse programa converte string em minúsculas para maiúsculas

int main(){

    char string[MAX_TAMANHO];
    int cont = 0;

    printf("Digite uma frase ou palavra: ");
    fgets(string, MAX_TAMANHO, stdin);

    if (string[strlen(string) - 1] == '\n')
    {
        string[strlen(string) - 1] = '\0';
    }

    // Converte as letras para maiúsculo
    while (string[cont] != '\0')
    {
        string[cont] = toupper(string[cont]);
        cont++;
    }

    puts("Frase/letra em letras maiusculas:"); // puts imprime a string
    puts(string);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // implementacao de false e true
#include <string.h>
#include <ctype.h>
#define MAX 50

 // Gerador de strings com concatenação de numeros aleatórios

bool alphabetic(char string[MAX])
{
    for(int i = 0; string[i] != '\0'; i++)
    {
        if(!isalpha(string[i])){
            return false;
        }
    }
    return true;
}

int main(void)
{
   
    char senha[MAX];
    char str[MAX];
    int ValorAleatorio = 0;
    int tamanhoSenha;

    printf("Insira uma senha: ");
    gets(senha);

    if(alphabetic(senha))
    {
        srand(time(NULL));
        
        while(ValorAleatorio == 0){
            ValorAleatorio = rand() % 200;
        }
        sprintf(str , "%i" , ValorAleatorio);
        strcat(senha,str);
        tamanhoSenha = strlen(senha);

        printf("A senha sugerida e: %s",senha);
        printf("\nO tamanho dela e: %i",tamanhoSenha);
    }
    else
    {   
        tamanhoSenha = strlen(senha);

        printf("A senha sugerida e: %s",senha);
        printf("\nO tamanho dela e: %i",tamanhoSenha);
    }       

    return 0;
}
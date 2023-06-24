#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//O código realiza uma comparacao entre parametros de nome e senha

int main(void)
{
  
     


    int login(char email[20],char senha[12]);
    char String1[20],String2[12];
    char String3[20],String4[12];
    int tentativa = 0;

    printf("Insira a primeira String para registro: ");
    gets(String1);

    fflush(stdin);

    printf("\nInsira a segunda String para registro: ");
    gets(String2);
    
    while(tentativa < 5)
    {
        system("cls");
        login(String3,String4);

        if(strcmp(String1,String3) == 0 && strcmp(String2,String4) == 0)
        {
            printf("Seja bem vindo!");
            tentativa = 5;
        }
        else
        {
            printf("Tente novamente!");
            tentativa++;
        }
    }

    return 0;
}

int login(char email[20],char senha[12])
{
    printf("Insira uma String email: ");
    gets(email);

    fflush(stdin);

    printf("\nInsira uma outra string senha: ");
    gets(senha);
}
#include <stdio.h>
#include <string.h>
/*
------------- Grupo -------------
João Victor Bernardes Gracês
Gabriel de Oliveira Batista
Guilherme Akio Suguino Sampaio
Luca Paes Beraldi
*/

int main()
{
    char senha[20];
    int tamanho_senha, i, tem_letra = 0, tem_numero = 0, tem_letraMaiuscula = 0, tem_simbolo = 0;

    printf("Digite a senha: ");
    gets(senha);

    tamanho_senha = strlen(senha);

    if (tamanho_senha < 8)
    {
        printf("Senha fraca. Deve ter pelo menos 8 caracteres.\n");
        return 0;
    }

    for (i = 0; i < tamanho_senha; i++) {
	
    
        if (senha[i] >= 'a' && senha[i] <= 'z')
            tem_letra = 1;
        else if (senha[i] >= '0' && senha[i] <= '9')
            tem_numero = 1;
        else if (senha[i] >= 'A' && senha[i] <= 'Z')
        	tem_letraMaiuscula = 1;
        else if (senha[i] == '!' || senha[i] == '@' || senha[i] == '#' || senha[i] == '$' || senha[i] == '%' || senha[i] == '&' || senha[i] == '*' || senha[i] == '+')
        	tem_simbolo = 1;
    }

    if (tem_letra && tem_numero && tem_letraMaiuscula && tem_simbolo)
    	printf("Senha forte.\n");
    else
     printf("Senha fraca. Deve conter letras, letras maiúsculas, números e simbolos.\n");
    

    return 0;
}
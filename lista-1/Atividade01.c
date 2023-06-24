#include<stdio.h>
#include<locale.h>

/*1 - A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o número de filhos. A prefeitura deseja saber:
a) média salarial da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.

*/

int main(void){
    float salario=1,maiorSalario=0,mediaSalario=0,mediaFilhos=0,percentPessoas=0;
    int i=0,cont=0,numFilhos;

    setlocale(LC_ALL,"Portuguese");
    while(salario>=0){

        printf("Qual é o valor do salário da pessoa[%d]?\n",cont);
        scanf("%f", &salario);

        if(salario>=0){
            printf("Quantos filhos a pessoa[%d] possui?\n",cont);
            scanf("%d",&numFilhos);
            
   
            if(salario>maiorSalario){
                maiorSalario=salario;
            }
            mediaSalario=mediaSalario+salario;
            mediaFilhos=mediaFilhos+numFilhos;

            if(salario>100){
                percentPessoas++;
            }

            cont++;
            printf("\n\n");

        }
    }

    mediaSalario = mediaSalario/cont;
    mediaFilhos = mediaFilhos/cont;
    percentPessoas =  (percentPessoas/cont)*100;

    printf("\nMaior salário é de: %.2f\n",maiorSalario);
    printf("Media salarial é de: %.2f\n",mediaSalario);
    printf("Media de filhos é de: %.2f\n",mediaFilhos);
    printf("Percentual de pessoas com salário maior que R$100: %.2f",percentPessoas);


    return 0;
}
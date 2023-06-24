/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Faça um programa em C que recebendo a altura e o crescimento anual de duas pessoas calcule e imprima quantos anos serão necessários para que a mais baixa seja maior que a outra. Caso isto não ocorra em 100 anos informar mensagem de impossibilidade.
Encerre a entrada de dados quando for digitada uma idade negativa. (Não use vetores ou matrizes).

*/

#include <stdio.h>

int main() {
    float alturaChico = 1.50, alturaZe = 1.10;
    int crescimentoChico = 2, crescimentoZe = 3;
    int anos = 0;
    
    float novaAlturaChico, novaAlturaZe;
    
    while(1) {
        printf("Digite a altura de Chico em metros: ");
        scanf("%f", &alturaChico);
        if(alturaChico < 0) break;
        
        printf("Digite o crescimento anual de Chico em centimetros: ");
        scanf("%d", &crescimentoChico);
        
        printf("Digite a altura de Ze em metros: ");
        scanf("%f", &alturaZe);
        
        printf("Digite o crescimento anual de Ze em centimetros: ");
        scanf("%d", &crescimentoZe);
        
        anos = 0;
        
        while(alturaZe <= alturaChico) {
            novaAlturaChico = alturaChico + (crescimentoChico / 100.0);
            novaAlturaZe = alturaZe + (crescimentoZe / 100.0);
            
            alturaChico = novaAlturaChico;
            alturaZe = novaAlturaZe;
            
            anos++;
            
            if(anos == 100) {
                printf("Impossivel alcançar a altura de Chico em 100 anos.\n");
                break;
            }
        }
        
        if(anos < 100) printf("Serão necessários %d anos para que Ze ultrapasse a altura de Chico.\n", anos);
    }
    
    return 0;
}

// CODIGO ANTERIOR QUE DEU ERRADO
/*#include <stdio.h>
#include <stdlib.h>

/* 2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem
1,10 metro e cresce 3 centímetros por ano. Faça um programa em C que
recebendo a altura e o crescimento anual de duas pessoas calcule e
imprima quantos anos serão necessários para que a mais baixa seja
maior que a outra. Caso isto não ocorra em 100 anos informar mensagem
de impossibilidade.
Encerre a entrada de dados quando for digitada uma idade negativa.
(Não use vetores ou matrizes).


Aluno: João Victor Bernardes Gracês 

void calcularCrescimento(float , float, float, float); 

int main(int argc, char *argv[]) {
	
	float tam1,  tam2,  crescimento1,  crescimento2;
	
	printf("Digite sua altura atual: ");
	scanf("%f", &tam1);
	
	printf("\nDigite quantos cm cresce por ano: ");
	scanf("%f",&crescimento1);
	
	printf("\n--- Segunda pessoa ---\n");
	printf("Digite sua altura: ");
	scanf("%f", &tam2);
	printf("Digite quantos cm cresce por ano: ");
	scanf("%f", &crescimento2);
	
	calcularCrescimento(tam1, crescimento1, tam2, crescimento2);
	
	return 0;
}

void calcularCrescimento(float tam1, float crescimento1, float tam2, float crescimento2){
	
	int i = 0;
	float maior, menor;
	
	if ((tam1 < 0) || (tam2 < 0) || (crescimento1 < 0) || (crescimento2 < 0)){
				printf("Valor negativo invalido!");
		return 0;
	}

	if (tam1 > tam2) {
		maior = tam1;
		menor = tam2;
		
		while (i< 100 || maior > menor){
			maior += crescimento1;
			menor += crescimento2;
			i++;
			printf("%f", maior);
		}
	} else {
		maior = tam2;
		menor = tam1;
		
		while ( i < 100 || maior > menor){
			menor += crescimento1;
			maior += crescimento2;
			i++;
			printf("%f", maior);
			}
	
		}
	 
	if (i >= 100)
		printf("A pessoa demorou mais de 100 anos para realizar o feito, é impossivel ela ultrapassar");
	 else 
		printf("Demorou %d anos para o menor ultrapassasr o maior", i);


}*/

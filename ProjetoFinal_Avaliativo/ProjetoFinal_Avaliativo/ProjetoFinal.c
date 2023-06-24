#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#define R 25

/*Nomes do grupo:
Joao Victor Bernardes Graces
Luca Paes Beraldi
Henrique Portal Lessa
Guilherme Akio
Gabriel de Oliveira*/

float calcularPeso(float base, float altura, float comprimento) { // funcao para calcular o peso
    float volume = base * altura * comprimento; // calculo do peso do volume para a formula do peso
    float peso = volume * 25;
    return peso;
}
/* --- Esqueletos de funcoes ---*/
void  gerarMenu();
void abrirGuindaste(float ); 
/*-------------------------------*/

/*Funcao principal*/
int main() {
    
    float peso;
    float base, altura, comprimento;
    int i, escolha ;

    gerarMenu(); // gerou o menu
    do {
    	printf("-- Escolha uma das opcoes do Menu Guindaste: ");
		scanf("%d", &escolha);
		
		if (escolha == 0){
			 // ele fecha o programa
				printf("Obrigado por usar:)");
				return 0;
				}
			else if (escolha == 1){ // apenas realiza o calculo de peso
				system("cls");
				printf("Digite a base da coluna em metros: ");
			    scanf("%f", &base);
			
			    printf("Digite a altura da coluna em metros: ");
			    scanf("%f", &altura);
			
			    printf("Digite o comprimento da coluna em metros: ");
			    scanf("%f", &comprimento);
			
			    peso = calcularPeso(base, altura, comprimento);
			
			    printf("\nO peso da coluna eh: %.2f\n", peso);
			
			    if (peso <= 1000) {
			        printf("Guindaste a ser usado: G1\n");
			    } else if (peso > 1000 && peso <= 2000) {
			        printf("Guindaste a ser usado: G3\n");
			    } else {
			        printf("Guindaste a ser usado: G2\n");
   				 }
   				system("pause");
   				system("cls");
   				gerarMenu();
			}
   			else if (escolha == 2){ // caso queira ver novamente qual o guindaste a utilizar
   				abrirGuindaste(peso);
   				system("pause");
   				system("cls");
   				gerarMenu();
			}
   			else{ // caso o usuario escolha um outro numero
   				printf("Digite um numero valido\n");
			}
   				
   				
			
	} while (escolha != 0);


    return 0;
}


void  gerarMenu(){ // funcao para gerar o guindastes que carrega o menu
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	int i;
 	printf("===== Bem-vindo ao programa de selecao de guindaste =====\n\n");
	for(i = 0; i < 1; i++){
		                                                               
printf("                                                         #, #, #\n");
  usleep(100000); // essa funcao � a respos�vel por criar o efeito/animacao de delay para cada print, para fazer isso colocamos em um fro loop             
printf("                                                  ##     #   //  #\n");
  usleep(100000);              
printf("                                      (#         /      //     /\n");
	usleep(100000);           
printf("                                      #              (        //       #\n");
  
	usleep(100000);         
printf("                               #.                 #          ////        (\n");
	usleep(100000);       
printf("                        #*                     #              ///           (\n");
	usleep(100000);    
printf("                 ##                         *    .,*******,,,,...***          #)\n");
	usleep(100000);  
printf("         ,#,/*****/**    .     . *  **   *    *    * *  *,,,,   .*   /   *  ****\n");
	usleep(100000);
printf("         /,                                              %%%%%%%%%%%         &&&&\n");
	usleep(100000);
printf("     	&                                                  &&&&&&&          &&&&\n");
	usleep(100000);
printf("         &                                                 ,////*           &&&&\n");
	usleep(100000);
printf("         /                                                 ,    *\n");
	usleep(100000);              
printf("                                                           ,.   *\n");
	usleep(100000);               
printf("                                                           ,    *\n");
	usleep(100000);               
printf("                                                           ,    *\n");
	usleep(100000);               
printf("                                                           ,   /*\n");
	usleep(100000);               
printf("         /                                                 , /  *\n");
	usleep(100000);               
printf("         &                                                 ,////*\n");
	usleep(100000);               
printf("         &                                                 ,  ( *\n");
	usleep(100000);               
printf("         .                                                 , .  *\n");
	usleep(100000);               
printf("                                                           ,    *\n");
	usleep(100000);              
printf("       #                                                   , .  *\n");
	usleep(100000);               
printf("    	                                                   ,    *\n");
	usleep(100000);               
printf("     ****/**/***/******                                    ,////*\n");
	usleep(100000); 
printf("       MENU GUINDASTE                                      ,    *\n");
	usleep(100000);
printf("     Escolha uma opcao:                                    ,    *\n");
	usleep(100000);
printf("      0 - Sair do programa                                 , .  *\n");
	usleep(100000);
printf("      1 - Calculo do peso                                  ,    *\n");
	usleep(100000);
printf("      2 - Mostrar Guindaste                                ,    *\n");
	usleep(100000);             
printf("     .***#*************                                    ,    *\n");
	usleep(100000);              
printf("                                                           ,/   *\n");
	usleep(100000);             
printf("                                                           ,    *\n");
	usleep(100000);               
printf("                                                           ,    *\n");
	usleep(100000);               
printf("                                                           ,   /*\n");
	usleep(100000);               
printf("                                                           , /  *\n");
	usleep(100000);             
printf("                                                           ,////*\n");
	usleep(100000);               
printf("                                                           ,  ( *\n");
	usleep(100000);             
printf("                                                           , .  *\n");
	usleep(100000);               
printf("                                                           ,    *\n");
	usleep(100000);               
printf("                                                           , .  *\n");
	usleep(100000);               
printf("                                                           ,    *\n");
	usleep(100000);               
printf("                                                           ,.,..*\n");
	usleep(100000);               
printf("                                                           ,    *\n");
	usleep(100000);               
printf("                                                           ,/,,,*\n");
	usleep(100000);               
printf("                                                           ,    *\n");
	usleep(100000);               
printf("                                                           ,   ,*\n");
	usleep(100000);               
printf("                                                           %%%%%%%%%%%%\n");
	usleep(100000);            
printf("                                                       #############\n");
	usleep(100000); 
    }
}

void abrirGuindaste(float peso){ // essa funcao � para abrir um arquivo que fala o guindaste que precisa utilizar

    	    if (peso <= 1000) {
			    FILE *file = fopen("Crane1.txt", "r");
				if (file == NULL) { // informa se o arquivo nao foi achado
                        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
				       printf("Falha em abir o arquivo.\n");
				
				}
				    
				int ch;
				while ((ch = fgetc(file)) != EOF) {
				       putchar(ch);
				  }
                   
				fclose(file);
			    } else if (peso > 1000 && peso <= 2000) {
			     	    FILE *file = fopen("Crane3.txt", "r");
					    if (file == NULL) { // informa se o arquivo nao foi achado
                            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					        printf("Falha em abir o arquivo.\n");
							
					    }
					    
					    int ch;
					    while ((ch = fgetc(file)) != EOF) {
					        putchar(ch);
					    }
                         
					    fclose(file);
			    } else {
					    FILE *file = fopen("Crane2.txt", "r");
				    if (file == NULL) { // informa se o arquivo nao foi achado
                        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
				        printf("Falha em abir o arquivo.\n");	
				    }
				    
				    int ch;
				    while ((ch = fgetc(file)) != EOF) {
				        putchar(ch);
				    }
                     
				    fclose(file);
   				 }
}

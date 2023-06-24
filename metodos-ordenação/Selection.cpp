#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gerarVetor(int[], int);
int imprimirVetor(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);
void insertionSort(int[], int);
void quickSort(int[], int, int);

int main(void) {
	int vetor[TAM], valor;
	
	gerarVetor(vetor, TAM);
	quickSort(vetor, 0, TAM-1);
	imprirmirVetor(vetor, TAM);
	
	return 0;
}

int gerarVetor (int vet[], int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
		vet[i] = rand()%100;
}

int imprirmirVetor(int vet[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n[%3d] = %d", i, vet[i]);
	}
}

void bubbleSort(int vet[], int n){ 
	int bolha, borda, aux;
	
	for(borda=n-1;borda>0;borda--) {
		for(bolha=0;bolha<borda;bolha++){
			if(vet[bolha] > vet[bolha+1]){
				aux = vet[bolha];
				vet[bolha] = vet[bolha+1];
				vet[bolha+1] = aux;
			}
		}
	}


}

void selectionSort(int vet[], int n){ 
	int bolha, borda, aux, maior;
	
	for(borda=n-1;borda>=0;borda--) {
		maior = 0;
		for(bolha=0;bolha<=borda;bolha++){
			if(vet[bolha] > vet[maior])
				maior = bolha;
		}
		aux = vet[borda];
		vet[borda] = vet[maior];
		vet[maior] = aux;
	}		
}

void insertionSort(int vet[], int n) {
	int parte, elemento, i;
	for (parte=1; parte<n; parte++) {
		elemento = vet[parte];
		i = parte-1;
		while ((i >= 0) && (vet[i] > elemento)) {
			vet[i+1] = vet[i];
			i--;
		}
		vet[i+1] = elemento;
	}
}

void quickSort(int vet[], int ini, int fim){
	int pivo=vet[ini], i=ini, f=fim, aux;
	
	if(ini >= fim)
		return;
	while(i<f){
		while(vet[f] >= pivo)
			f--;
		if(i <f){
			aux = vet[i];
			vet[i] = vet[f];
			vet[f] = aux;
			i++;
			
		}
		while(vet[i] <= pivo)
			i++;
		if(i < f){
			aux = vet[i];
			vet[i]= vet[f];
			vet[f] = aux;
			f--;
		}	
	}
	quickSort(vet, ini, f);
	quickSort(vet, i, fim);	
}
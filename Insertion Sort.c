#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 100

void cria_vet(int []);
void imprime_vet(int vet[]);
void insertionSort(int original[], int length);

int main (){
	int vet[TAM];
		
	cria_vet(vet);
	imprime_vet(vet);
	insertionSort(vet,TAM);
	
}


void cria_vet(int vet[]){
	int i ;
	srand(time(0));
	for(i = 0; i < TAM; i++)
		vet[i] = rand()%1000;
}
void imprime_vet(int vet[]){
	int i;
	
		for(i = 0; i < TAM; i++)
			printf(" %d",vet[i]);
	
		printf("\n");
}

void insertionSort(int vet[], int length) {
	int i, j, atual;

	for (i = 1; i < length; i++) {
		atual = vet[i];
		j = i - 1;

		while ((j >= 0) && (atual < vet[j])) {
			vet[j + 1] = vet[j];
			j = j - 1;
		}

		vet[j + 1] = atual;
	}


}

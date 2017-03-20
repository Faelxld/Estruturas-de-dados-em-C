#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 100

void cria_vet(int []);
void imprime_vet(int vet[]);
void shellSort(int *vet, int size);

int main (){
	int vet[TAM];
		
	cria_vet(vet);
	imprime_vet(vet);
	shellSort(vet,TAM);
	
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
void shellSort(int *vet, int size) {
    int i , j , value;
    int k = 1;
    while(k < size) {
        k = 3*k+1;
    }
    while ( k > 1) {
        k /= 3;
        for(i = k; i < size; i++) {
            value = vet[i];
            j = i - k;
            while (j >= 0 && value < vet[j]) {
                vet [j + k] = vet[j];
                j -= k;
            }
            vet [j + k] = value;
        }
    }
}

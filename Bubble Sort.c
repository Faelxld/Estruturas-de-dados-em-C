#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 100

void cria_vet(int []);
void imprime_vet(int vet[]);
void bubbleSort(int[], int);
void bolha_rec(int[], int );


int main (){
	int vet[TAM];
		
	cria_vet(vet);
	imprime_vet(vet);
	insertionSort(vet,TAM);
	imprime_vet(vet);	
	
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

void bubbleSort(int v[], int n){
	int i , j ;
	for(i = n-1 ; i >= 1 ; i-- ){
			int troca = 0;
		for(j=0 ; j < i ; j++ )
			if(v[j] > v[j+1]){
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
				troca = 1;	
			}
		if(troca == 0)
	 	  return;	
										
		}
}

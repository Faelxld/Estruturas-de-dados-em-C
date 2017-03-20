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
void selection_sort(int num[], int tam) 
{ 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void atualizaPosicao(int *vetor, int tamanho, int valor){
	int i;
	
	for(i=0;i<tamanho;i++){
		*(vetor + i) = valor;
	}
}

void imprimePosicao(int *vetor, int tamanho){
	int i;
	
	printf("Valores do vetor: \n");
	for(i=0;i<tamanho;i++){
		printf("%d\n", *(vetor + i));
	}	
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5], valor;
	
	printf("Informe um valor: ");
	scanf("%d", &valor);
	
	atualizaPosicao(vetor, 5, valor);
	
	imprimePosicao(vetor, 5);
	
	return 0;
}

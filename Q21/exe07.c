#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int buscaNumero(int vetor[], int tamanho, int numero);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int vetor[20], i, numeroBusca;

    for (i=0;i<20;i++) {
    	printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número a ser buscado: ");
    scanf("%d", &numeroBusca);

    int posicao = buscaNumero(vetor, 20, numeroBusca);

    if (posicao != -1) {
        printf("O número %d está na posição %d do vetor.\n", numeroBusca, posicao+1);
    } else {
        printf("O número %d não está no vetor.\n", numeroBusca);
    }

    return 0;
}

int buscaNumero(int vetor[], int tamanho, int numero) {
	int i;
    for (i=0;i<tamanho;i++) {
        if (vetor[i] == numero) {
            return i;
        }
    }
    return -1;
}

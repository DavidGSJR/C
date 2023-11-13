#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroA[10], numeroB[10], i, j;
	
	for(i=0;i<10;i++){
		printf("Digite o %d número inteiro para o conjunto A: ", i+1);
		scanf("%d", &numeroA[i]);	
	}
	
	for(i=0;i<10;i++){
		printf("Digite o %d número inteiro para o conjunto B: ", i+1);
		scanf("%d", &numeroB[i]);	
	}
	
	printf("\nOs números iguais entre os dois conjuntos:\n");
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(numeroA[i]==numeroB[j]){
				printf("%d ", numeroA[i]);
				break;
			}
		}		
	}

	
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	char letra[10];
	
	for(cont=0;cont<10;cont++){
		printf("Digite o %d° letra: ", cont+1);
		fflush(stdin);
		scanf("%c",&letra[cont]);
	}
	
	printf("Posição \t Letra Digitado\n");
	
	for(cont=0;cont<10;cont++){
		printf("%d \t %c \n", cont+1, letra[cont]);
	}
	
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero[15], cont;
	
	for(cont=0;cont<15;cont++){
		printf("Digite o %dº número: ", cont+1);
		scanf("%d", &numero[cont]);
	}
	
	printf("Posição \t Número Digitado\n");
	
	for(cont=0;cont<15;cont++){
		
		if(numero[cont]%2==0){
			printf("%d \t %d PAR \n", cont+1, numero[cont]);
		} else{
			printf("%d \t %d ÍMPAR \n", cont+1, numero[cont]);
		}
	}
	
	return 0;
}

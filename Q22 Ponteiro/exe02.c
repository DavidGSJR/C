#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero[10], cont;
	
	for(cont=0;cont<10;cont++){
		printf("Digite o %d� n�mero: ",cont+1);
		scanf("%d", &numero[cont]);
	}
	
	printf("N�mero \t Endere�o\n");
	for(cont=0;cont<10;cont++){
		printf("%d \t %p \n", numero[cont], &numero[cont]);
	}
	
	return 0;
}

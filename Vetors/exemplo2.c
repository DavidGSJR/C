#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num[15], cont;
	
	for(cont=0;cont<15;cont++){
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%d",&num[cont]);
	}
	
	printf("Posi��o \t N�mero Digitado\n");
	
	for(cont=0;cont<15;cont++){
		printf("%d \t %d \n", cont+1, num[cont]);
	}
	
	return 0;
}

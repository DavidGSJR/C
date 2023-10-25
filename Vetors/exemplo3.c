#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[5], cont, maior=0;
	
	for(cont=0;cont<5;cont++){
		printf("Digite o %d° número: ", cont+1);
		scanf("%d", &numeros[cont]);
	}
	
	maior=numeros[0];
	
	for(cont=0;cont<5;cont++){
		if(maior<numeros[cont]){
			maior=numeros[cont];
		}
	}
	
	printf("O maior número digitado é %d", maior);
	
	return 0;
}

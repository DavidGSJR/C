#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero[15], numeroBuscado, cont, achou;
	
	for(cont=0;cont<15;cont++){
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%d", &numero[cont]);
	}
	
	printf("Digite o n�mero a ser buscado: ");
	scanf("%d", &numeroBuscado);
	
	for(cont=0;cont<15;cont++){		
		if(numeroBuscado==numero[cont]){
			printf("O n�mero %d foi encontrado na posi��o %d", numeroBuscado, cont+1);
			achou=1;
			break;
		} 
	}
	
	if(achou==0){
		printf("O n�mero %d n�o foi localizado.", numeroBuscado);
	}
	
	return 0;
}

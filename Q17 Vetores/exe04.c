#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero[8], cont, total;
	
	for(cont=0;cont<8;cont++){
		printf("Digite o %dº número: ", cont+1);
		scanf("%d", &numero[cont]);
		
		if(numero[cont]%6==0){
			total++;
		}
	}
	
	printf("Posição \t Número Digitado\n");
	
	for(cont=0;cont<8;cont++){
		printf("%d \t %d \n", cont+1, numero[cont]);
	}
	
	printf("Total de números múltiplos de seis: %d\n", total);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero[8], cont, total;
	
	for(cont=0;cont<8;cont++){
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%d", &numero[cont]);
	}
	
	printf("Posi��o \t N�mero Digitado\n");
	
	for(cont=0;cont<8;cont++){
		printf("%d \t %d \n", cont+1, numero[cont]);
		
	}
	if(numero[cont]%6==0){
			total+=numero[cont];
			printf("A soma dos multiplos de 6 � %d", total);
		}
	return 0;
}

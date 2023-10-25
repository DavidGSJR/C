#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idades[3], cont, soma;
	
	for(cont=0;cont<3;cont++){
		printf("Digite a %dª idade: ",cont+1);
		scanf("%d", &idades[cont]);
		soma=soma+idades[cont];		
	}
	
	printf("Posição \t Idade Informada\n");
	for(cont=0;cont<3;cont++){
		printf("%d \t %d \n", cont+1, idades[cont]);
	}
	
	printf("A soma das idades é %d", soma);
	
	return 0;
}

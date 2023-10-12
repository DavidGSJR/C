#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont=1, soma=0, numero;
	
	do{
		printf("Digite um número inteiro: ");
		scanf("%i", &numero);
		
		soma+=numero;
		cont++;
	}while(numero<=10);
	
	printf("A soma dos números digitados é %i", soma);
	
	return 0;
}

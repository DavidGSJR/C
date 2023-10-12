#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont=1, soma=0, numero;
	
	
	
	while(cont<=10){
		printf("Digite um número inteiro: ");
		scanf("%i", &numero);
		soma+=numero;
		cont++;
		
	}
	
	printf("A soma dos números digitados é %i", soma);
	
	return 0;
}

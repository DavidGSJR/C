#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont=1, soma=0, numero;
	
	do{
		printf("Digite um n�mero inteiro: ");
		scanf("%i", &numero);
		
		soma+=numero;
		cont++;
	}while(numero<=10);
	
	printf("A soma dos n�meros digitados � %i", soma);
	
	return 0;
}

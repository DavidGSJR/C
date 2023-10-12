#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, cont, soma=0;
	
	printf("Digite um número: ");
	scanf("%i", &numero);
	
	for(cont=0; cont<=numero;cont++){
		soma+=cont;
	}
	printf("A soma dos números é %i", soma);
	
	return 0;
}

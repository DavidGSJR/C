#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont=1, soma=0, numero;
	
	for(cont=1;cont<=10;cont++){
		soma+=numero;
	}
	
	printf("A soma dos números digitados é %i", soma);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor[5], cont, *pont = valor;
	
	for(cont=0;cont<5;cont++){
		printf("Digite o %dª número: ",cont+1);
		scanf("%d", pont + cont);
	}
	
	printf("O dobro dos valores lidos é:\n");
    for (cont=0;cont<5;cont++) {
        printf("%d\n", *(pont + cont) * 2);
    }
	
	return 0;
}

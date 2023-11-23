#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculaFatorial(int numero);


int main(){
   	setlocale(LC_ALL, "Portuguese");

 	int numero;
 	
 	printf("Informe um número para calcular o fatorial: ");
 	scanf("%d", &numero);
 	
 	int resultado = calculaFatorial(numero);
 	
 	printf("O fatorial de %d é %d", numero, resultado);

	return 0;
}

int calculaFatorial(int numero){
	if(numero==0){
		return 1;
	} else {
		return numero * calculaFatorial(numero-1);
	}
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void calculaOperacoes(int num1, int num2, int *soma, int *subtracao){
	*soma = num1 + num2;
	*subtracao = num1 - num2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, soma, subtracao;
	
	printf("Informe o 1º número: ");
	scanf("%d", &numero1);
	
	printf("Informe o 2º número: ");
	scanf("%d", &numero2);
	
	calculaOperacoes(numero1, numero2, &soma, &subtracao);
	
	printf("A soma dos números %d e %d: %d\n", numero1, numero2, soma);
	printf("A subtração dos números %d e %d: %d", numero1, numero2, subtracao);
	
	return 0;
}

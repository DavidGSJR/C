#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, numeroInicial, numeroFinal, resultado, contador;
	
	printf("Digite o n�mero a ser calculado: ");
	scanf("%d", &numero);
	
	printf("Digite a partir de qual n�mero deseja calcular: ");
	scanf("%d", &numeroInicial);
	
	printf("Digite at� qual n�mero deseja calcular: ");
	scanf("%d", &numeroFinal);
	
	for(contador=numeroInicial;contador<=numeroFinal;contador++){
		resultado = numero * contador;
		printf("%d * %d = %d\n", numero, contador, resultado);
	}
	
	return 0;
}

#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int seletor;
	float numero1, numero2, soma, subtracao, divisao, multiplicacao, exponenciacao;
	
	
	printf("Digite o primeiro número: ");
	scanf("%f", &numero1);
	
	printf("Digite o segundo número: ");
	scanf("%f", &numero2);
	
	printf("1 - Soma \t 2 - Subtração \t 3 - Multiplicação \t 4 - Divisão \t 5 - Exponenciação\n");
	scanf("%i", &seletor);
	
	
	switch(seletor){
		case 1:
		soma = numero1+numero2;
		printf("A Soma dos números %.2f e %.2f é %.2f", numero1, numero2, soma);
		break;
		case 2:
		subtracao = numero1-numero2;
		printf("A Subtração dos números %.2f e %.2f é %.2f", numero1, numero2, subtracao);
		break;
		case 3:
		multiplicacao = numero1*numero2;
		printf("A Multiplicação dos números %.2f e %.2f é %.2f", numero1, numero2, multiplicacao);
		break;
		case 4:
		divisao = numero1/numero2;
		printf("A Divisão dos números %.2f e %.2f é %.2f", numero1, numero2, divisao);
		break;
		case 5:
		exponenciacao = pow(numero1, numero2);
		printf("A Exponenciação dos números %.2f e %.2f é %.2f", numero1, numero2, exponenciacao);
		break;
		default:
		printf("\nOpçăo inválida");	
		break;
			
	}
	return 0;
}
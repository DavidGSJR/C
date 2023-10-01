#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, media, diferenca, produto, divisao;
	int opcao;
	
	printf("Digite o 1º número: ");
	scanf("%f", &num1);
	
	printf("Digite o 2º número: ");
	scanf("%f", &num2);
	
	printf("Qual operação deseja realizar\n 1 - Média \t 2 - Diferença \t 3 - Produto \t 4 - Divisão\n");
	scanf("%i", &opcao);
	
	switch(opcao){
	    case 1:
	    media = (num1+num2)/2;
	    printf("A média dos números é de: %.2f", media);
	    break;
	    case 2:
	    diferenca = num1-num2;
	    printf("A diferenca dos números é de: %.2f", diferenca);
	    break;
	    case 3:
	    produto = num1*num2;
	    printf("O produto dos números é de: %.2f", produto);
	    break;
	    case 4:
	    divisao = num1/num2;
	    printf("A divisão dos números é de: %.2f", divisao);
	    break;
	    default:
	    printf("\nOpção inválida");
	    break;
	}
	
	return 0;
}
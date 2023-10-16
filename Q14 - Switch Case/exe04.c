#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int seletor;
	
	
	printf("Quantos dias tem cada mês?\n");
	printf("Selecione um Mês: 1 \t 2 \t 3 \t 4 \t 5 \t 6 \t 7 \t 8 \t 9 \t 10 \t 11 \t 12\n");
	scanf("%i", &seletor);
	
	
	switch(seletor){
		case 2:
		printf("O Mês selecionado tem 28 dias!");
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		printf("O Mês selecionado tem 30 dias!");
		break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("O Mês selecionado tem 31 dias!");
		break;
		default:
			printf("\nOpçăo inválida");	
			break;
			
	}
	return 0;
}
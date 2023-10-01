#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char seletor;
	
	printf("Digite:\n N - Netflix \t D - Disney+ \t H - HBO Max\n");
	scanf("%c", &seletor);
	
	seletor = toupper(seletor);
	
	switch(seletor){
		case 'N':
			printf("Você selecionou NETFLIX");
			break;		
		case 'D':
			printf("Você selecionouDISNEY+");
			break;			
		case 'H':
			printf("Você selecionou HBO MAX");
			break;
		default:
			printf("\nOpção inválida");	
			break;
			
	}
	return 0;
}

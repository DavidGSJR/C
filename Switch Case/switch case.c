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
			printf("Voc� selecionou NETFLIX");
			break;		
		case 'D':
			printf("Voc� selecionouDISNEY+");
			break;			
		case 'H':
			printf("Voc� selecionou HBO MAX");
			break;
		default:
			printf("\nOp��o inv�lida");	
			break;
			
	}
	return 0;
}

#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int caloriaPrato, caloriaSobremesa, caloriaBebida, prato, sobremesa, bebida, total;
	
	printf("Selecione um prato: \n1- Vegetariano \t 2 - Peixe \t 3 - Frango \t 4 - Carne\n");
	scanf("%i", &prato);
	
	
	switch(prato){
		case 1:
			caloriaPrato = 180;
			break;
		case 2:
			caloriaPrato = 230;
			break;
		case 3:
			caloriaPrato = 250;
			break;
		case 4:
			caloriaPrato = 350;
			break;
		default:
			printf("\nOPÇĂO INVÁLIDA");
			break;
	}
	
	printf("Selecione uma sobremesa: \n1- Abacaxi \t 2 - Sorvete Diet \t 3 - Mousse Diet \t 4 - Mousse Chocolate\n");
	scanf("%i", &sobremesa);
	
	
	switch(sobremesa){
		case 1:
			caloriaSobremesa = 75;
			break;
		case 2:
			caloriaSobremesa = 110;
			break;
		case 3:
			caloriaSobremesa = 170;
			break;
		case 4:
			caloriaSobremesa = 200;
			break;
		default:
			printf("\nOPÇĂO INVÁLIDA");
			break;
	}
	
	printf("Selecione uma bebida: \n1- Chá \t 2 - Suco de Laranja \t 3 - Suco de Melăo \t 4 - Refrigerante Diet\n");
	scanf("%i", &bebida);

	
	switch(bebida){
		case 1:
			caloriaBebida = 20;
			break;
		case 2:
			caloriaBebida = 70;
			break;
		case 3:
			caloriaBebida = 100;
			break;
		case 4:
			caloriaBebida = 65;
			break;
		default:
			printf("\nOPÇĂO INVÁLIDA");
			break;
	}
	
	total = caloriaPrato + caloriaSobremesa + caloriaBebida;
	
	printf("A caloria dos pratos selecionados foi: %i cal", total);
	
	return 0;
}
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	printf("Digite um n�mero entre 1 e 12 para saber o m�s correspondente: ");
	scanf("%i", &mes);
	
	switch(mes){
		case 1:
			printf("O m�s 1 corresponde a JANEIRO!");
			break;
		case 2:
			printf("O m�s 2 corresponde a FEVEREIRO!");
			break;
		case 3:
			printf("O m�s 3 corresponde a MAR�O!");
			break;
		case 4:
			printf("O m�s 4 corresponde a ABRIL!");
			break;
		case 5:
			printf("O m�s 5 corresponde a MAIO!");
			break;
		case 6:
			printf("O m�s 6 corresponde a JUNHO!");
			break;
		case 7:
			printf("O m�s 7 corresponde a JULHO!");
			break;
		case 8:
			printf("O m�s 8 corresponde a AGOSTO!");
			break;
		case 9:
			printf("O m�s 9 corresponde a SETEMBRO!");
			break;
		case 10:
			printf("O m�s 10 corresponde a OUTUBRO!");
			break;
		case 11:
			printf("O m�s 11 corresponde a NOVEMBRO!");
			break;
		case 12:
			printf("O m�s 12 corresponde a DEZEMBRO!");
			break;
		default:
			printf("\nOP��O INV�LIDA");
	}
	
	return 0;
}

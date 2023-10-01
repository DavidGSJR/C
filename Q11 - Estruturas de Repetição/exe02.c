#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	printf("Digite um número entre 1 e 12 para saber o mês correspondente: ");
	scanf("%i", &mes);
	
	switch(mes){
		case 1:
			printf("O mês 1 corresponde a JANEIRO!");
			break;
		case 2:
			printf("O mês 2 corresponde a FEVEREIRO!");
			break;
		case 3:
			printf("O mês 3 corresponde a MARÇO!");
			break;
		case 4:
			printf("O mês 4 corresponde a ABRIL!");
			break;
		case 5:
			printf("O mês 5 corresponde a MAIO!");
			break;
		case 6:
			printf("O mês 6 corresponde a JUNHO!");
			break;
		case 7:
			printf("O mês 7 corresponde a JULHO!");
			break;
		case 8:
			printf("O mês 8 corresponde a AGOSTO!");
			break;
		case 9:
			printf("O mês 9 corresponde a SETEMBRO!");
			break;
		case 10:
			printf("O mês 10 corresponde a OUTUBRO!");
			break;
		case 11:
			printf("O mês 11 corresponde a NOVEMBRO!");
			break;
		case 12:
			printf("O mês 12 corresponde a DEZEMBRO!");
			break;
		default:
			printf("\nOPÇÃO INVÁLIDA");
	}
	
	return 0;
}

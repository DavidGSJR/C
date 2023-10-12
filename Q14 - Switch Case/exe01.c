#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int seletor;
	float totalCompra=0;
	
	printf("Informe o valor da compra: ");
	scanf("%f", &totalCompra);
	
	printf("Informe:\n 1 - Cliente comum \t 2 - Funcionário \t 3 - Vip\n");
	scanf("%i", &seletor);
	
	
	switch(seletor){
		case 1:
		    totalCompra=totalCompra;
			printf("O valor total da compra é de R$%.2f", totalCompra);
			break;		
		case 2:
		    totalCompra=totalCompra-(totalCompra *0.3);
			printf("O valor total da compra é de R$%.2f", totalCompra);
			break;			
		case 3:
			 totalCompra=totalCompra-(totalCompra *0.1);
			printf("O valor total da compra é de R$%.2f", totalCompra);
			break;
		default:
			printf("\nOpçăo inválida");	
			break;
			
	}
	return 0;
}
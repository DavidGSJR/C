#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    float valor, precoFinal, valorParcela;
    int seletor;
    
    printf("Informe o valor do carro: ");
    scanf("%f", &valor);
	
	printf("Informe como deseja pagar!\n");
	printf("1 - A vista \t 2 - 6x \t 3 - 12x \t 4 - 18x \t 5 - 24x \t 6 - 30x \t 7 - 36x \t 8 - 42x \t 9 - 48x \t 10 - 54x \t 11 - 60x\n");
	scanf("%i", &seletor);
	
	switch(seletor){
	    case 1:
	    precoFinal = valor - (valor*0.2);
	    printf("\nO valor do carro para pagamento a vista é de R$%.2f", precoFinal);
	    break;
	    
	    case 2:
	    precoFinal = valor + (valor*0.03);
	    valorParcela = precoFinal/6;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 6x é de R$%.2f", precoFinal);
	    break;
	    
	    case 3:
	    precoFinal = valor + (valor*0.06);
	    valorParcela = precoFinal/12;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 12x é de R$%.2f", precoFinal);
	    break;
	    
	    case 4:
	    precoFinal = valor + (valor*0.09);
	    valorParcela = precoFinal/18;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 18x é de R$%.2f", precoFinal);
	    break;
	    
	    case 5:
	    precoFinal = valor + (valor*0.12);
	    valorParcela = precoFinal/24;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 24x é de R$%.2f", precoFinal);
	    break;
	    
	    case 6:
	    precoFinal = valor + (valor*0.15);
	    valorParcela = precoFinal/30;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 30x é de R$%.2f", precoFinal);
	    break;
	    
	    case 7:
	    precoFinal = valor + (valor*0.18);
	    valorParcela = precoFinal/36;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 36x é de R$%.2f", precoFinal);
	    break;
	    
	    case 8:
	    precoFinal = valor + (valor*0.21);
	    valorParcela = precoFinal/42;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 42x é de R$%.2f", precoFinal);
	    break;
	    
	    case 9:
	    precoFinal = valor + (valor*0.24);
	    valorParcela = precoFinal/48;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 48x é de R$%.2f", precoFinal);
	    break;
	    
	    case 10:
	    precoFinal = valor + (valor*0.27);
	    valorParcela = precoFinal/54;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 54x é de R$%.2f", precoFinal);
	    break;
	    
	    case 11:
	    precoFinal = valor + (valor*0.30);
	    valorParcela = precoFinal/60;
	    printf("\nO valor de cada parcela é de R$%.2f", valorParcela);
	    printf("\nO valor do carro para pagamento em 60x é de R$%.2f", precoFinal);
	    break;
	    
	    default:
		printf("\nOpçăo inválida");	
		break;
	}
	
	return 0;
}
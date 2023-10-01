#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int codigo;
	
	printf("Informe o código do produto: ");
	scanf("%i", &codigo);
	
	switch(codigo){
	    case 1:
	        printf("Alimento não perecível");
	        break;
	    case 2:
	    case 3:
	    case 4:
	        printf("Alimento não perecível");
	        break;
	   case 5:
	   case 6:
	        printf("Vestuário");
	        break;
	   case 7:
	        printf("Higiene Pessoal");
	        break;
	   case 8:
	   case 9:
	   case 10:
	   case 11:
	   case 12:
	   case 13:
	   case 14:
	   case 15:
	        printf("Limpeza e Utensilios Domésticos");
	        break;
	   default:
	        printf("\nOpção Inválida");
	        break;
	}
	
	return 0;
}
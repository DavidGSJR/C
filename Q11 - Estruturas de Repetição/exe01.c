#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float pesoTerra, pesoPlaneta; 
	int numPlaneta;
	
	printf("Digite um peso na terra: ");
	scanf("%f", &pesoTerra);
	
	printf("Selecione o C�digo do planeta\n1 - Merc�rio \t 2 - V�nus \t 3 - Marte \t 4  - J�pter \t 5 - Saturno \t 6 - Urano\n");
	scanf("%i", &numPlaneta);
	
	switch(numPlaneta){
		case 1:
			pesoPlaneta = (pesoTerra/10) * 0.37;
			printf("O peso %.2f na terra equivale a %.2f em Merc�rio", pesoTerra, pesoPlaneta);
			break;
		case 2:
			pesoPlaneta = (pesoTerra/10) * 0.88;
			printf("O peso %.2f na terra equivale a %.2f em V�nus", pesoTerra, pesoPlaneta);
			break;
		case 3:
			pesoPlaneta = (pesoTerra/10) * 0.38;
			printf("O peso %.2f na terra equivale a %.2f em Marte", pesoTerra, pesoPlaneta);
			break;
		case 4:
			pesoPlaneta = (pesoTerra/10) * 2.64;
			printf("O peso %.2f na terra equivale a %.2f em J�pter", pesoTerra, pesoPlaneta);
			break;
		case 5:
			pesoPlaneta = (pesoTerra/10) * 1.15;
			printf("O peso %.2f na terra equivale a %.2f em Saturno", pesoTerra, pesoPlaneta);
			break;
		case 6:
			pesoPlaneta = (pesoTerra/10) * 1.17;
			printf("O peso %.2f na terra equivale a %.2f em Urano", pesoTerra, pesoPlaneta);
			break;
		default:
			printf("\nOp��o inv�lida");	
			break;
	}
	
	return 0;
}

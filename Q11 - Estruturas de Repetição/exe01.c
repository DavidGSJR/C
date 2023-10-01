#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float pesoTerra, pesoPlaneta; 
	int numPlaneta;
	
	printf("Digite um peso na terra: ");
	scanf("%f", &pesoTerra);
	
	printf("Selecione o Código do planeta\n1 - Mercúrio \t 2 - Vênus \t 3 - Marte \t 4  - Júpter \t 5 - Saturno \t 6 - Urano\n");
	scanf("%i", &numPlaneta);
	
	switch(numPlaneta){
		case 1:
			pesoPlaneta = (pesoTerra/10) * 0.37;
			printf("O peso %.2f na terra equivale a %.2f em Mercúrio", pesoTerra, pesoPlaneta);
			break;
		case 2:
			pesoPlaneta = (pesoTerra/10) * 0.88;
			printf("O peso %.2f na terra equivale a %.2f em Vênus", pesoTerra, pesoPlaneta);
			break;
		case 3:
			pesoPlaneta = (pesoTerra/10) * 0.38;
			printf("O peso %.2f na terra equivale a %.2f em Marte", pesoTerra, pesoPlaneta);
			break;
		case 4:
			pesoPlaneta = (pesoTerra/10) * 2.64;
			printf("O peso %.2f na terra equivale a %.2f em Júpter", pesoTerra, pesoPlaneta);
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
			printf("\nOpção inválida");	
			break;
	}
	
	return 0;
}

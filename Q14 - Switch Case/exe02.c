#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int seletor, nascidas, habitantes, obtos;
	float natalidade, mortalidade;
	
	
	printf("O que você deseja calcular?\n");
	printf("1 - Taxa de Natalidade \t 2 - Taxa de Mortalidade\n");
	scanf("%i", &seletor);
	
	
	switch(seletor){
		case 1:
		    printf("Informe o número de crianças nascidas: ");
		    scanf("%i", &nascidas);
		    
			printf("Informe o número de habitantes:");
			scanf("%i", &habitantes);
			
			natalidade = (nascidas*1000)/habitantes;
			
			printf("A taxa de natalidade foi de %.2f.", natalidade);
			break;		
		case 2:
		    printf("Informe o número de óbtos: ");
		    scanf("%i", &obtos);
		    
		    printf("Informe o número de habitantes:");
			scanf("%i", &habitantes);
			
			mortalidade = (obtos*1000)/habitantes;
			
			printf("A taxa de mortalidade foi de %.2f.", mortalidade);
			break;			
		default:
			printf("\nOpçăo inválida");	
			break;
			
	}
	return 0;
}
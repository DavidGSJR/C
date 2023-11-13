#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, mesa, lugares, disponivel, total_lugares;
	int lugares_ocupados[150] = {0};
	
	total_lugares = 0;
	
	do{
		printf("C�digo da mesa entre 100 e 129 (0 para sair): ");
		scanf("%d", &mesa);
		
		if(mesa == 0){
			break;
		}
		
		if(mesa < 100 || mesa > 129){
			printf("C�digo da mesa inv�lido.\n");
			continue;
		}
		
		disponivel = 1;
		for(i=0;i<5;i++){
			if(lugares_ocupados[mesa-100+i] != 0){
				disponivel = 0;
				break;
			}
		}
		
		if(disponivel){
			printf("Quantidade de lugares: ");
			scanf("%d", &lugares);
			
			if(lugares < 1 || lugares > 5){
				printf("Quantidade de lugares inv�lida.\n");
				continue;
			}
			
			for(i=0;i<lugares;i++){
				lugares_ocupados[mesa-100+i] = 1;
			}
			
			total_lugares += lugares;
			
			printf("Reserva realizada com sucesso.\n");
		} else {
			printf("Mesa indispon�vel.\n");
		}
	}while(1);
	
	printf("Total de lugares reservados: %d\n", total_lugares);
	
	return 0;
}


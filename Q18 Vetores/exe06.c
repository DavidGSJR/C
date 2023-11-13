#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int voos[10], lugares[10];
	int id, voo, i;
	
	for(i=0;i<10;i++){
		printf(" N�mero do Voo %d: ", i+1);
		scanf("%d", &voos[i]);
		printf("Quantidade de lugares: ");
		scanf("%d", &lugares[i]);
	}
	
	do{
		printf("N�mero da identidade: ");
		scanf("%d", &id);
		
		printf("N�mero do voo (0 para sair): ");
		scanf("%d", &voo);
		
		if(voo == 0){
			break;
		}
		
		if(voo < 1 || voo > 10){
			printf("Voo inv�lido.\n");
			continue;
		}
		
		if(lugares[voo-1] > 0){
			lugares[voo-1]--;
			printf("Reserva realizada com sucesso.\n");
			printf("ID do cliente: %d\n", id);
			printf("N�mero do voo: %d\n", voo);
		} else {
			printf("N�o h� lugares dispon�veis no voo %d.\n", voo);
		}
	}while(1);
	
	return 0;
}


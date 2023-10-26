#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nAluno[15], cont;
	float prova1[15],prova2[15], media[15];
	
	for(cont=0;cont<15;cont++){
		printf("Digite a 1ª nota do %dº aluno: ", cont+1);
		scanf("%f", &prova1[cont]);
		
		printf("Digite a 2ª nota do %dº aluno: ", cont+1);
		scanf("%f", &prova2[cont]);
		
		media[cont]=(prova1[cont]+prova2[cont])/2;
	}
	
	printf("ALUNO\t\tNOTA 1\t\tNOTA 2\t\tMÉDIA\t\tSITUAÇÃO\n");
	for(cont=0;cont<15;cont++){
		if(media[cont]>=7){
			printf("%d\t\t%.1f\t\t%.1f\t\tAPROVADO\n", cont+1, prova1[cont], prova2[cont], media[cont]);
		} else{
			printf("%d\t\t%.1f\t\t%.1f\t\REPROVADO\n", cont+1, prova1[cont], prova2[cont], media[cont]);
		}
	}
	
	return 0;
}

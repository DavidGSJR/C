#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float matNotas[4][4];
	int i, j;
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("Informe a nota %d do aluno %d: ", j+1, i+1);
			scanf("%f", &matNotas[i][j]);
			
			matNotas[i][3] = (matNotas[i][0] + matNotas[i][1] + matNotas[i][2])/3;
		}
	}
	
	printf("\nALUNO\t\tNOTA 1\t\tNOTA2\t\tNOTA 3\t\tMÉDIA\n");
	
	for(i=0;i<4;i++){
		printf("\n%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f", i+1, matNotas[i][0], matNotas[i][1], matNotas[i][2], matNotas[i][3]);
	}
	
	
	return 0;
}

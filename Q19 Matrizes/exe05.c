#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int matrizA[3][4], matrizB[3][4], i, j;

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Informe o número da %dª linha e %dª coluna: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			matrizB[i][j] = matrizA[i][j]*3;
		}
	}

	printf("\nCOL 1\tCOL 2\tCOL 3\tCOL 4\n");

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t", matrizB[i][j]);
		}
		printf("\n");
	}

	return 0;
}

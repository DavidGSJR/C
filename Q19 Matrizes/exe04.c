#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int matNumeros[4][4], i, j;

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Informe o número da %dª linha e %dª coluna: ", i+1, j+1);
			scanf("%d", &matNumeros[i][j]);
		}
	}

	printf("\nCOL 1\tCOL 2\tCOL 3\tCOL 4\n");

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(matNumeros[i][j] % 2!=0){
				printf("%d\t", matNumeros[i][j]);
			} else{
				printf("*\t");
			}
		}
		printf("\n");
	}

	return 0;
}

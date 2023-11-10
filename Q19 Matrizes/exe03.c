#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int matNumeros[5][5];
	int i, j;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Informe o número da %dª linha e %dª coluna: ", i+1, j+1);
			scanf("%d", &matNumeros[i][j]);
		}
	}
	
	printf("\nCOL 1\tCOL 2\tCOL 3\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matNumeros[i][j] % 2==0){
				printf("%d\t", matNumeros[i][j]);
			}
			
		}
		printf("\n");
	}
	
	return 0;
}

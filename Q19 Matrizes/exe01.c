#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int matNumeros[10][10];
	int i, j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("Informe o n�mero da %d� linha e %d� coluna: ", i+1, j+1);
			scanf("%d", &matNumeros[i][j]);
		}
	}
	
	printf("\nCOL 1\tCOL 2\tCOL 3\tCOL 4\tCOL 5\tCOL 6\tCOL 7\tCOL 8\tCOL 9\tCOL 10\n");
	
	for(i=0;i<4;i++){
		printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d", matNumeros[i][0], matNumeros[i][1],matNumeros[i][2],matNumeros[i][3],matNumeros[i][4],matNumeros[i][5],matNumeros[i][6],matNumeros[i][7],matNumeros[i][8],matNumeros[i][9]);
	}
	
	
	return 0;
}

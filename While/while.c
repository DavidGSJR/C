#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 1;
	
	while(num>0){
		printf("Digite um número inteiro: ");
		scanf("%d", &num);
		system("cls");
		
		num = num;
	}

	printf("\nVocê digitou um número menor ou igual a 0");
	return 0;
}

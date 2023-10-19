#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	char nome[4];
	int cont;
	
	printf("Digite seu nome: ");
	scanf("%[^\n]s", &nome);
	
	for(cont=0;cont<4;cont++){
		printf("%c", nome[cont]);
	}
	
	
	
	
	
	return 0;
}

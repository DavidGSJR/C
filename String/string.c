#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	char nome[100];
	
	printf("Digite seu nome: ");
	scanf("%[^\n]s", &nome);
	
	
	printf("%s", nome);
	
	
	
	return 0;
}

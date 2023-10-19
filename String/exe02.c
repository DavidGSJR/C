#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	char nome[50];
	
	printf("Digite seu nome: ");
	scanf("%[^\n]s", &nome);
	
	if(nome[0]=='a' || nome[0]=='A'){
		printf("%s", nome);
	} else{
		printf("O nome digitado não começa com a letra A!");
	}
	
	
	
	
	
	return 0;
}

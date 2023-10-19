#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	char nome;
	int cont;
	
	printf("Digite seu nome: ");
	scanf("%[^\n]s", nome);
	
	cont = strlen(nome);
	
	/*for(cont=0;nome[cont]!='\0';cont++){
		
	}*/
	
	printf("%s possui %d caracteres", nome, cont);
	
	
	
	return 0;
}

#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	char nome[50];
	int cont, tamanho;
	
	printf("Digite um nome: ");
	scanf("%[^\n]c", nome);
	
	tamanho = strlen(nome); 
	
	for(cont=0;nome[cont];cont++){
	 	nome[cont] = toupper(nome[cont]);
	 }
	
	for(cont=tamanho;cont>=0;cont--){
		printf("%c" ,nome[cont]);
	}
	 
	
	return 0;
}

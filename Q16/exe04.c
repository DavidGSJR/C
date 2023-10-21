#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int cont, tamanho, escada;
	
	printf("Digite um nome: ");
	gets(nome);
	
	tamanho = strlen(nome);
	
	for(cont=0;nome[cont];cont++){
	    for(escada=0;escada<=cont;escada++){
	        printf("%c", nome[escada]);
	        
	    }
	    printf("\n");
	}
	
	
	
	return 0;
}
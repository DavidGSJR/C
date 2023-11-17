#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

struct pessoa{
	int idade;
	char nome[99], endereco[200];
	
};

typedef struct pessoa Cliente;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Cliente pessoa;
	
	
	printf("Informe o nome da pessoa: ");
	fflush(stdin);
	scanf("%s", &pessoa.nome);
	
	printf("Informe a idade da pessoa %s: ", pessoa.nome);
	scanf("%d", &pessoa.idade);
	
	printf("Informe o endereço da pessoa %s: ", pessoa.nome);
	fflush(stdin);
	scanf("%s", &pessoa.endereco);
	
	system("cls");	
	
	printf("\nNome: %s", pessoa.nome);
	printf("\nIdade: %d", pessoa.idade);
	printf("\nEndereço: %s", pessoa.endereco);
	
	return 0;
}

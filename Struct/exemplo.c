#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

struct funcionario{
	int cod, dpto, cargo;
	char nome[99];
	float salario;
	
};

typedef struct funcionario Func;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Func empregado[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Informe o código do funcionário %d: ",i+1);
		scanf("%d", &empregado[i].cod);
		
		printf("Informe o nome do funcionário %d: ", i+1);
		fflush(stdin);
		scanf("%[^\n]s",&empregado[i].nome);
	}
	
	system("cls");
	
	for(i=0;i<5;i++){
		printf("\nCódigo do funcionário: %d", empregado[i].cod);
		printf("\nNome do funcionário: %s", empregado[i].nome);
	}
	
	return 0;
}

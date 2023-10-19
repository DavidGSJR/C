#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	char nome[20];
	int idade, sexo;
	
	printf("Digite seu nome: ");
	scanf("%[^\n]s", &nome);
	
	printf("Informe o seu sexo (1 - FEMININO OU 2 - MASCULINO): ");
	scanf("%d", &sexo);
	
	printf("Informe sua idade: ");
	scanf("%i", &idade);
	
	if(sexo == 1 && idade<25){
		printf("%s ACEITA!", nome);
	} else {
		printf("NÃO ACEITA");
	}
	
	
	
	
	return 0;
}

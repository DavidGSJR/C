#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int var;
int *pont;
	
void imprimir1();
void imprimir2();
	
int main(){
   	setlocale(LC_ALL, "Portuguese");
	
	pont = &var;
	
	var = 10;
	imprimir1();
		
	var = 70;
	imprimir2();
	
	return 0;
}

void imprimir1(){
	printf("O conteúdo de var é: %d\n", var);
	printf("O endereço de var é: %p\n", &var);
	printf("O conteúdo de pont é: %p\n", pont);
	printf("O endereço de pont é %p\n", &pont);
}

void imprimir2(){
	printf("\nO conteúdo de var é: %d\n", var);
	printf("O endereço de var é: %p\n", &var);
	printf("O conteúdo de pont é: %p\n", pont);
	printf("O endereço de pont é %p\n", &pont);
}

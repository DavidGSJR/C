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
	printf("O conte�do de var �: %d\n", var);
	printf("O endere�o de var �: %p\n", &var);
	printf("O conte�do de pont �: %p\n", pont);
	printf("O endere�o de pont � %p\n", &pont);
}

void imprimir2(){
	printf("\nO conte�do de var �: %d\n", var);
	printf("O endere�o de var �: %p\n", &var);
	printf("O conte�do de pont �: %p\n", pont);
	printf("O endere�o de pont � %p\n", &pont);
}

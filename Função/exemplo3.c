#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float base, altura; //Variável global

float calcularArea(); //Protótipo da função


int main(){
   	setlocale(LC_ALL, "Portuguese");

 	float area;
 	
 	printf("Informe o valor da base: ");
 	scanf("%f", &base);
 	
 	printf("Informe o valor da altura: ");
 	scanf("%f", &altura);
 	
 	area = calcularArea();
 	
 	printf("A área é de %.2f", area);

	return 0;
}

float calcularArea(){
	float area = base*altura;
	return area;
}

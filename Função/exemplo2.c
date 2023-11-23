#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calcularArea(float b, float a);


int main(){
   	setlocale(LC_ALL, "Portuguese");

 	float area, base, altura;
 	
 	printf("Informe o valor da base: ");
 	scanf("%f", &base);
 	
 	printf("Informe o valor da altura: ");
 	scanf("%f", &altura);
 	
 	area = calcularArea(base, altura);
 	
 	printf("A área é de %.2f", area);

	return 0;
}

float calcularArea(float b, float a){
	float area = b*a;
	return area;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float graus;

float converterRad();


int main(){
   	setlocale(LC_ALL, "Portuguese");

 	float radiano;
 	
 	printf("Informe o valor de um angulo em graus: ");
 	scanf("%f", &graus);
 	
 	radiano = converterRad();
 	
 	
 	printf("O angulo em radiano é %.2f", radiano);

	return 0;
}

float converterRad(){
	float rad = (graus*3.14)/180;
	return rad;
}


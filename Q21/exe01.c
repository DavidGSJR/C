#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float num1, num2, num3;

float dobro1();
float dobro2();
float dobro3();

int main(){
   	setlocale(LC_ALL, "Portuguese");

 	float dobroNum1, dobroNum2, dobroNum3;
 	
 	printf("Informe o 1� n�mero: ");
 	scanf("%f", &num1);
 	
 	printf("Informe o 2� n�mero: ");
 	scanf("%f", &num2);
 	
 	printf("Informe o 3� n�mero: ");
 	scanf("%f", &num3);
 	
 	dobroNum1 = dobro1();
 	dobroNum2 = dobro2();
 	dobroNum3 = dobro3();
 	
 	printf("O dobro do 1� n�mero �: %.2f\nO dobro do 2� n�mero �: %.2f\nO dobro do 3� n�mero �: %.2f", dobroNum1, dobroNum2, dobroNum3);

	return 0;
}

float dobro1(){
	float dobroNumero1 = num1*2;
	return dobroNumero1;
}

float dobro2(){
	float dobroNumero2 = num2*2;
	return dobroNumero2;
}

float dobro3(){
	float dobroNumero3 = num3*2;
	return dobroNumero3;
}

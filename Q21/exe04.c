#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float numero, i, fat;

float converterfat();


int main(){
   	setlocale(LC_ALL, "Portuguese");

 	float numRad;
 
 	
 	printf("Informe um número para calcular o seu fatorial: ");
 	scanf("%f", &numero);
 	
 	numRad = converterFat();
 	
 	printf("O fatorial d", numero, numRad);

	return 0;
}

float converterfat(){
	float rad = for(i=0;i<=numero;i++){
		fat = i*numero;
	};
	return rad;
}


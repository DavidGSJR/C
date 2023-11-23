#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calculaMedia(float n1, float n2){
	float media = (n1+n2)/2;
	return media;
}

int main(){
   	setlocale(LC_ALL, "Portuguese");

 	float nota1, nota2, media;
 	
 	printf("Informe a 1ª nota: ");
 	scanf("%f", &nota1);
 	
 	printf("Informe a 2ª nota: ");
 	scanf("%f", &nota2);
 	
 	media = calculaMedia(nota1, nota2);
 	
 	printf("A média é %.2f", media);

	return 0;
}

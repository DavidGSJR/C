#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calculaMedia(float n1, float n2, float n3){
	float media = (n1+n2+n3)/3;
	return media;
}

int main(){
   	setlocale(LC_ALL, "Portuguese");

 	float nota1, nota2, nota3, media;
 	
 	printf("Informe a 1� nota: ");
 	scanf("%f", &nota1);
 	
 	printf("Informe a 2� nota: ");
 	scanf("%f", &nota2);
 	
 	printf("Informe a 3� nota: ");
 	scanf("%f", &nota3);
 	
 	media = calculaMedia(nota1, nota2, nota3);
 	
 	printf("A m�dia � %.2f", media);

	return 0;
}

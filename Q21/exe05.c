#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float base, altura;

float areaRet();
float perimetroRet();
float diagonalRet();


int main(){
   	setlocale(LC_ALL, "Portuguese");

 	float areaR, perimetroR, diagonalR;
 	
 	printf("Informe a base: ");
 	scanf("%f", &base);
 	
 	printf("Informe a altura: ");
 	scanf("%f", &altura);
 	
 	areaR = areaRet();
 	perimetroR = perimetroRet();
 	diagonalR = diagonalRet();
 	
 	printf("Area: %.2f\nPerímetro: %.2f\nDiagonal: %.2f", areaR, perimetroR, diagonalR);

	return 0;
}

float areaRet(){
	float area = base*altura;
	return area;
}

float perimetroRet(){
	float per = 2 * (base+altura);
	return per;
}

float diagonalRet(){
	float diag = sqrt((base*base) + (altura*altura));
	return diag;
}

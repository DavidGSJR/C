#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, soma=0, produto=0;
	
		printf("Digite um n�mero positivo ou negativo e zero para terminar: ");
		scanf("%i", &numero);
		
		while(numero>0){
			if(numero%2==0){
				soma+=numero;
			} else {
				produto=produto*numero;
			}
		}
		
		printf("A soma dos numeros pares � %i", soma);
		printf("o produto dos numeros �mpares � %i", produto);
	
	return 0;
}

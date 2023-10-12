#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, soma=0, produto=1;
		
		while(1){
		    printf("Digite um número positivo ou negativo e zero para terminar: ");
		    scanf("%i", &numero);
		    
		    if(numero<=0){
		        break;
		    }
			if(numero%2==0){
				soma+=numero;
			} else {
				produto*=numero;
			}
		}
		
		printf("\nA soma dos numeros pares é %i", soma);		
		printf("\nO produto dos numeros ímpares é %i", produto);
	
	return 0;
}

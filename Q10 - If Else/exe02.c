#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num1, num2, soma;
    
    printf("Digite o 1� n�mero: ");
    scanf("%i", &num1);
    
    printf("Digite o 2� n�mero: ");
    scanf("%i", &num2);
    
    soma = num1 + num2;
    
    if(soma>20){
    	soma = soma + 8;
    	printf("A soma dos n�meros foi menor que 20, logo, a soma mais 8 �: %i", soma);
	} else{
		soma = soma - 5;
		printf("A soma dos n�meros foi menor que 20, logo, a subtra��o dele mais 5 �: %i", soma);
	}

    return 0;
}


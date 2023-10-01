#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num1, num2, soma;
    
    printf("Digite o 1º número: ");
    scanf("%i", &num1);
    
    printf("Digite o 2º número: ");
    scanf("%i", &num2);
    
    soma = num1 + num2;
    
    if(soma>20){
    	soma = soma + 8;
    	printf("A soma dos números foi menor que 20, logo, a soma mais 8 é: %i", soma);
	} else{
		soma = soma - 5;
		printf("A soma dos números foi menor que 20, logo, a subtração dele mais 5 é: %i", soma);
	}

    return 0;
}


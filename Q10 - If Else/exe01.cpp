#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num1, num2, soma;
    
    printf("Digite o 1� n�mero: ");
    scanf("%i", &num1);
    
    printf("Digite o 2� n�mero: ");
    scanf("%i", &num2);
    
    soma = num1 + num2;
    
    if(soma > 10){
    	printf("A soma dos n�meros � maior que 10!");
	} else{
		printf("A soma dos n�meros n�o � maior que 10!");
	}

    return 0;
}


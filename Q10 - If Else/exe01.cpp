#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num1, num2, soma;
    
    printf("Digite o 1º número: ");
    scanf("%i", &num1);
    
    printf("Digite o 2º número: ");
    scanf("%i", &num2);
    
    soma = num1 + num2;
    
    if(soma > 10){
    	printf("A soma dos números é maior que 10!");
	} else{
		printf("A soma dos números não é maior que 10!");
	}

    return 0;
}


#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num1, num2, num3;
    
    printf("Digite o 1º número: ");
    scanf("%i", &num1);
    
    printf("Digite o 2º número: ");
    scanf("%i", &num2);
    
    printf("Digite o 3º número: ");
    scanf("%i", &num3);
    
    if(num1>num2 && num1>num3 && num2>num3){
    	printf("Os números em ordem crescente são %i, %i e %i", num1, num2, num3);
	} else if(num1>num2 && num1>num3 && num3>num2){
		printf("Os números em ordem crescente são %i, %i e %i", num1, num3, num2);
	} else if(num2>num1 && num2>num3 && num1>num3){
		printf("Os números em ordem crescente são %i, %i e %i", num2, num1, num3);
	} else if(num2>num1 && num2>num3 && num3>num1){
		printf("Os números em ordem crescente são %i, %i e %i", num2, num3, num1);
	} else if(num3>num1 && num3>num2 && num1>num2){
		printf("Os números em ordem crescente são %i, %i e %i", num3, num1, num2);
	} else{
		printf("Os números em ordem crescente são %i, %i e %i", num3, num2, num1);
	}

    return 0;
}



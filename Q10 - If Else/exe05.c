#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um n�mero: ");
    scanf("%i", &numero);
    
    if(numero % 3 ==0 && numero % 7 ==0){
    	printf("O n�mero digitado � multiplo de 3 e 7!");
	} else{
		printf("O n�mero digitado n�o � multiplo de 3 e 7!");
	}

    return 0;
}



#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um n�mero: ");
    scanf("%i", &numero);
    
    if(numero % 5 ==0){
    	printf("O n�mero digitado � divis�vel por 5!");
	} else{
		printf("O n�mero digitado n�o � divis�vel por 5!");
	}

    return 0;
}


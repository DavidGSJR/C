#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um n�mero: ");
    scanf("%i", &numero);
    
    if(numero >= 20 && numero <= 50){
    	printf("O n�mero digitado est� entre 20 e 50");
	} else{
		printf("O n�mero digitado n�o est� entre 20 e 50");
	}

    return 0;
}



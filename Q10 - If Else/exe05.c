#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um número: ");
    scanf("%i", &numero);
    
    if(numero % 3 ==0 && numero % 7 ==0){
    	printf("O número digitado é multiplo de 3 e 7!");
	} else{
		printf("O número digitado não é multiplo de 3 e 7!");
	}

    return 0;
}



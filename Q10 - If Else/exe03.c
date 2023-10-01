#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um número: ");
    scanf("%i", &numero);
    
    if(numero % 3 ==0){
    	printf("O número digitado é multiplo de 3!");
	} else{
		printf("O número digitado não é multiplo de 3!");
	}

    return 0;
}


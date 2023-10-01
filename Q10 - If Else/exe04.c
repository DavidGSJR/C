#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um número: ");
    scanf("%i", &numero);
    
    if(numero % 5 ==0){
    	printf("O número digitado é divisível por 5!");
	} else{
		printf("O número digitado não é divisível por 5!");
	}

    return 0;
}


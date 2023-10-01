#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um número: ");
    scanf("%i", &numero);
    
    if(numero >= 20 && numero <= 50){
    	printf("O número digitado está entre 20 e 50");
	} else{
		printf("O número digitado não está entre 20 e 50");
	}

    return 0;
}



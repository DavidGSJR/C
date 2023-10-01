#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um número: ");
    scanf("%i", &numero);
    
    if(numero > 20){
    	printf("O número digitado é maior que 20");
	} else if(numero == 20){
		printf("O número digitado é igual a 20");
	} else{
		printf("O número digitado é menor que 20");
	}

    return 0;
}



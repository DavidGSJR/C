#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um n�mero: ");
    scanf("%i", &numero);
    
    if(numero > 20){
    	printf("O n�mero digitado � maior que 20");
	} else if(numero == 20){
		printf("O n�mero digitado � igual a 20");
	} else{
		printf("O n�mero digitado � menor que 20");
	}

    return 0;
}



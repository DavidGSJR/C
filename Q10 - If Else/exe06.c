#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float salario, prestacao;
    
    printf("Digite seu sal�rio: ");
    scanf("%f", &salario);
    
    printf("Informe o valor da preta��o: ");
    scanf("%f", &prestacao);
    
    if(prestacao <= (salario / 0.3)){
    	printf("N�o � possivel realizar o emprestimo!");
	} else{
		printf("Emprestimo aprovado!");
	}

    return 0;
}



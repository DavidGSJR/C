#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float salario, prestacao;
    
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    
    printf("Informe o valor da pretação: ");
    scanf("%f", &prestacao);
    
    if(prestacao <= (salario / 0.3)){
    	printf("Não é possivel realizar o emprestimo!");
	} else{
		printf("Emprestimo aprovado!");
	}

    return 0;
}



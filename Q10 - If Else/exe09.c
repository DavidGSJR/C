#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int anoNascimento, ano, idade;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%i", &anoNascimento);
    
    printf("Digite o ano: ");
    scanf("%i", &ano);
    
    idade = ano - anoNascimento;
    
    if(idade < 0){
    	printf("Idade menor que 0, inválida");
	} else{
		printf("Sua idade é de %i anos", idade);
	}

    return 0;
}



#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%i", &idade);
    
    if(idade >= 18 && idade <= 65){
        printf("Você é maior de idade");
    } else if(idade > 65){
        printf("Você tem mais de 65 anos");
    } else{
        printf("Você é menor de idade");
    }
    
return 0;
}
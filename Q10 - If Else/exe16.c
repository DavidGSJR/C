#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char nome[50];
    int idade;
    
    printf("Informe o seu nome: ");
    scanf("%s", &nome);
    
    printf("Informe a sua idade: ");
    scanf("%i", &idade);
    
    if(idade <= 10){
        printf("Olá %s, você irá pagar R$30,00 pelo plano de saúde", nome);
    } else if(idade>10 && idade<=29){
        printf("Olá %s, você irá pagar R$60,00 pelo plano de saúde", nome);
    } else if(idade>29 && idade<=45){
        printf("Olá %s, você irá pagar R$120,00 pelo plano de saúde", nome);
    } else if(idade>45 && idade<=59){
        printf("Olá %s, você irá pagar R$150,00 pelo plano de saúde", nome);
    } else if(idade>59 && idade<=65){
        printf("Olá %s, você irá pagar R$250,00 pelo plano de saúde", nome);
    } else{
        printf("Olá %s, você irá pagar R$400,00 pelo plano de saúde", nome);
    }
    
return 0;
}
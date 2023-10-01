#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float saldo, credito;
    
    printf("Digite o saldo médio do cliente: R$");
    scanf("%f", &saldo);
    
    if(saldo>=0 && saldo<=500){
        printf("Saldo médio do cliente: R$%.2f\n", saldo);
        printf("Nenhum crédito a ser oferecido");
    } else if(saldo>=501 && saldo<=1000){
        credito = saldo * 0.30;
        printf("Saldo médio do cliente: R$%.2f\n", saldo);
        printf("Valor do crédito: R$%.2f\n", credito);
    } else if(saldo>=1001 && saldo<=3000){
        credito = saldo * 0.40;
        printf("Saldo médio do cliente: R$%.2f\n", saldo);
        printf("Valor do crédito: R$%.2f\n", credito);
    } else{
        credito = saldo * 0.50;
        printf("Saldo médio do cliente: R$%.2f\n", saldo);
        printf("Valor do crédito: R$%.2f\n", credito);
    }
    
return 0;
}
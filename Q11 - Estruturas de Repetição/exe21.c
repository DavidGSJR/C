#include <stdio.h>

int main() {
    char nome[100]; // Usando um array para armazenar o nome
    float conta = 0, diaria = 30, total = 0;
    int dias, numeroConta, taxa;

    while (1) {
        printf("Informe o número da conta (0 encerra o programa): ");
        scanf("%i", &numeroConta);
        
        if (numeroConta == 0) {
            printf("Encerrando o programa.\n");
            break;
        }
        
        printf("Informe seu nome: ");
        scanf("%s", nome);
        
        printf("Informe o número de dias: ");
        scanf("%i", &dias);
        
        if (dias < 10) {
            taxa = 15;
        } else {
            taxa = 8;
        }
        conta = diaria * dias + taxa;
        total = total + conta;
        
        printf("Nome: %s\n", nome);
        printf("Número da conta: %i\n", numeroConta);
        printf("Conta: R$%.2f\n", conta);
        printf("\n");
    }
    
    printf("O valor total faturado pela pousada foi de R$%.2f reais\n", total);

    return 0;
}

#include <stdio.h>

int main() {
    int numero, qtd;
    float preco, total;
    char data;

    while (1) {
        printf("Informe o numero do pedido (0 encerra o programa): ");
        scanf("%i", &numero);
        
        if (numero == 0) {
            printf("Encerrando o programa.\n");
            break;
        }
        
        printf("Informe a data (dia/mês/ano): ");
        scanf("%s", &data);
        
        printf("Informe o preço unitário: ");
        scanf("%f", &preco);
        
        printf("Informe a quantidade: ");
        scanf("%i", &qtd);

            total += preco * qtd;

    }
    printf("O valor total da compra foi de R$%.2f reais\n", total);

    return 0;
}

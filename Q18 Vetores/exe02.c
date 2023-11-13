#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cont, menor = 0, igual = 0, maior = 0;
    float precoCompra[100], precoVenda[100], lucro[100], percentual[100];

    for (cont = 0; cont < 100; cont++) {
        printf("Informe o preço de compra da %iª mercadoria: ", cont + 1);
        scanf("%f", &precoCompra[cont]);

        printf("Informe o preço de venda da %iª mercadoria: ", cont + 1);
        scanf("%f", &precoVenda[cont]);

        lucro[cont] = precoVenda[cont] - precoCompra[cont];
        percentual[cont] = (lucro[cont]/precoCompra[cont]*100); 
    
		if (percentual[cont] < 10) {
            menor++;
        } else if (percentual[cont] >= 10 && percentual[cont] <= 20) {
            igual++;
        } else {
            maior++;
        }
	} 

    printf("\nQuantidade de mercadorias com lucro < 10%%: %d\n", menor);
    printf("Quantidade de mercadorias com 10%% <= lucro <= 20%%: %d\n", igual);
    printf("Quantidade de mercadorias com lucro > 20%%: %d\n", maior);

    return 0;
}


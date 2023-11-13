#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, cod[30], qtd[30], codPesquisa, pesquisa;
	float valorCompra[30], valorVenda[30];
	
	for(cont=0;cont<30;cont++){
		printf("informe o c�digo da %i� mercadoria: ", cont+1);
		scanf("%d", &cod[cont]);
		
		printf("informe a quantidade da %i� mercadoria: ", cont+1);
		scanf("%d", &qtd[cont]);
		
		printf("informe o valor de compra da %i� mercadoria: ", cont+1);
		scanf("%f", &valorCompra[cont]);
		
		printf("informe o valor de venda da %i� mercadoria: ", cont+1);
		scanf("%f", &valorVenda[cont]);		
	}
	
	printf("Digite 0 para listar todos os produtos ou informe o c�digo do produto desejado: ");
    scanf("%d", &codPesquisa);

    if (codPesquisa == 0) {
        printf("\nC�DIGO\tQUANTIDADE\tVALOR COMPRA\tVALOR VENDA\n");

        for (cont=0;cont<30;cont++) {
            printf("%d\t%d\t\t%.2f\t\t%.2f\n", cod[cont], qtd[cont], valorCompra[cont], valorVenda[cont]);
        }
    } else {
        pesquisa = 0;
        for (cont=0;cont<30;cont++) {
            if (codPesquisa == cod[cont]) {
                printf("C�DIGO: %d\tQUANTIDADE: %d\tVALOR COMPRA: %.2f\tVALOR VENDA: %.2f\n",
                       cod[cont], qtd[cont], valorCompra[cont], valorVenda[cont]);
                pesquisa = 1;
                break;
            }
        }

        if (!pesquisa) {
            printf("C�digo n�o encontrado!\n");
        }
    }
	
	return 0;
}

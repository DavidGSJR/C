#include <stdio.h>
#include <ctype.h>

int main() {
    char codigo;
    float valor, totalGeral = 0, totalLimpeza = 0, totalAlimentacao = 0, totalHigiene = 0;

    while (1) {
        printf("Informe o código da mercadoria (L para Limpeza, A para Alimentação, H para Higiene): ");
        scanf(" %c", &codigo);
        codigo = toupper(codigo);

        if (codigo == '0') {
            break;
        }

        printf("Informe o valor da mercadoria: R$");
        scanf("%f", &valor);

        totalGeral += valor;

        switch (codigo) {
            case 'L':
                totalLimpeza += valor;
                break;
            case 'A':
                totalAlimentacao += valor;
                break;
            case 'H':
                totalHigiene += valor;
                break;
            default:
                printf("Código de mercadoria inválido. Tente novamente.\n");
                break;
        }
    }

    printf("Total vendido no dia: R$%.2f\n", totalGeral);
    printf("Total vendido em Limpeza: R$%.2f\n", totalLimpeza);
    printf("Total vendido em Alimentação: R$%.2f\n", totalAlimentacao);
    printf("Total vendido em Higiene: R$%.2f\n", totalHigiene);

    return 0;
}

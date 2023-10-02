#include <stdio.h>

int main() {
    int numeroCarteira, numeroMultas, maiorNumeroMultas = 0, carteiraComMaisMultas = 0;
    float valorMulta, totalArrecadado = 0;

    while (1) {
        printf("Informe o número da carteira de motorista (0 para encerrar): ");
        scanf("%d", &numeroCarteira);

        if (numeroCarteira == 0) {
            break;
        }

        printf("Informe o número de multas para o motorista %d: ", numeroCarteira);
        scanf("%d", &numeroMultas);

        float dividaMotorista = 0;

        for (int cont = 1; cont <= numeroMultas; cont++) {
            printf("Informe o valor da multa %d para o motorista %d: R$", cont, numeroCarteira);
            scanf("%f", &valorMulta);
            dividaMotorista += valorMulta;
            totalArrecadado += valorMulta;
        }

        printf("A dívida do motorista %d é de R$%.2f\n", numeroCarteira, dividaMotorista);

        if (numeroMultas > maiorNumeroMultas) {
            maiorNumeroMultas = numeroMultas;
            carteiraComMaisMultas = numeroCarteira;
        }
    }

    printf("Total de recursos arrecadados com multas: R$%.2f\n", totalArrecadado);
    printf("Número da carteira do motorista com mais multas: %d\n", carteiraComMaisMultas);

    return 0;
}

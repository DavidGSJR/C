#include <stdio.h>

int main() {
    int numero, fatorial, i;

    while (1) {
        printf("Digite um número inteiro (ou digite um número menor que 1 para encerrar): ");
        scanf("%d", &numero);

        if (numero < 1) {
            printf("Encerrando o programa.\n");
            break;
        }

        fatorial = 1;

        for (i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é %d\n", numero, fatorial);
    }

    return 0;
}

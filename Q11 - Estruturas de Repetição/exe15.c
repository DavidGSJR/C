#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    printf("Digite um número (0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero >= 100 && numero <= 200) {
            contador++;
        }

        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &numero);
    }

    printf("Quantidade de números entre 100 e 200 digitados: %d\n", contador);

    return 0;
}

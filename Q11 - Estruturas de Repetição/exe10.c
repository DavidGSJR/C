#include <stdio.h>

int main() {
    int multiplicando, multiplicador, produto = 0;

    printf("Digite o multiplicando (positivo): ");
    scanf("%d", &multiplicando);

    printf("Digite o multiplicador (positivo): ");
    scanf("%d", &multiplicador);

    if (multiplicando < 0 || multiplicador < 0) {
        printf("Por favor, insira números positivos.\n");
    }

    for (int cont = 0; cont < multiplicador; cont++) {
        produto = produto + multiplicando;
    }

    printf("O produto de %d e %d é %d\n", multiplicando, multiplicador, produto);

    return 0;
}

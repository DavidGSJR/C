#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha;

    while (1) {
        printf("<Conversão de base>\n");
        printf("1: decimal para hexadecimal\n");
        printf("2: hexadecimal para decimal\n");
        printf("3: decimal para octal\n");
        printf("4: octal para decimal\n");
        printf("5: Encerra\n");

        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: {
                int decimal;
                printf("Informe o número decimal: ");
                scanf("%d", &decimal);
                printf("Valor em hexadecimal: %X\n", decimal);
                break;
            }

            case 2: {
                char hexadecimal[20];
                printf("Informe o número hexadecimal: ");
                scanf("%s", hexadecimal);
                int decimal = strtol(hexadecimal, NULL, 16);
                printf("Valor em decimal: %d\n", decimal);
                break;
            }

            case 3: {
                int decimal;
                printf("Informe o número decimal: ");
                scanf("%d", &decimal);
                printf("Valor em octal: %o\n", decimal);
                break;
            }

            case 4: {
                char octal[20];
                printf("Informe o número octal: ");
                scanf("%s", octal);
                int decimal = strtol(octal, NULL, 8);
                printf("Valor em decimal: %d\n", decimal);
                break;
            }

            case 5:
                printf("Encerrando o programa.\n");
                return 0;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}

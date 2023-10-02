#include <stdio.h>

int main() {
    int idade, total21=0, total50=0;

    while (1) {
        printf("Digite uma idade (ou digite uma idade negativa para encerrar): ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Encerrando o programa.\n");
            break;
        } else if(idade < 21){
            total21++;
        } else if(idade > 50){
            total50++;
        }

    }
    printf("O total de pessoas com menos de 21 anos é %d\n", total21);
    printf("O total de pessoas com mais de 50 anos é %d\n", total50);

    return 0;
}

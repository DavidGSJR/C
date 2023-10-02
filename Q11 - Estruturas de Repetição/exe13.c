#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

int main() {
     setlocale(LC_ALL, "Portuguese");
      
    int idade, opniao, totalBom = 0, totalExcelente = 0, totalRegular = 0, totalPessoas = 0;
    float mediaIdadesExcelente = 0, percentagemBom = 0;

    for (int i = 1; i <= 20; i++) {
        printf("Informe a idade do espectador %d: ", i);
        scanf("%d", &idade);

        printf("Informe a opinião (3 - Excelente, 2 - Bom, 1 - Regular) do espectador %d: ", i);
        scanf("%d", &opniao);
        system("cls");

        if (opniao == 3) {
            totalExcelente++;
            mediaIdadesExcelente += idade;
        } else if (opniao == 1) {
            totalRegular++;
        } else if (opniao == 2) {
            totalBom++;
        }

        totalPessoas++;
    }

    if (totalExcelente > 0) {
        mediaIdadesExcelente /= totalExcelente;
        printf("A média das idades das pessoas que responderam excelente é: %.2f\n", mediaIdadesExcelente);
    } else {
        printf("Nenhuma pessoa respondeu excelente.\n");
    }

    printf("A quantidade de pessoas que responderam regular é: %d\n", totalRegular);

    if (totalPessoas > 0) {
        percentagemBom = ((float)totalBom / totalPessoas) * 100;
        printf("A percentagem de pessoas que responderam bom é: %.2f%%\n", percentagemBom);
    } else {
        printf("Nenhuma pessoa respondeu bom.\n");
    }

    return 0;
}

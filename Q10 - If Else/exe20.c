#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char placa[8];
    int ultimoDigito;

    printf("Digite a placa do veículo (formato ABC1234): ");
    scanf("%s", placa);

    ultimoDigito = placa[6] - '0';

    if (ultimoDigito == 1) {
        printf("O emplacamento deve ser renovado em janeiro.\n");
    } else if (ultimoDigito == 2) {
        printf("O emplacamento deve ser renovado em fevereiro.\n");
    } else if (ultimoDigito == 3) {
        printf("O emplacamento deve ser renovado em março.\n");
    } else if (ultimoDigito == 4) {
        printf("O emplacamento deve ser renovado em abril.\n");
    } else if (ultimoDigito == 5) {
        printf("O emplacamento deve ser renovado em maio.\n");
    } else if (ultimoDigito == 6) {
        printf("O emplacamento deve ser renovado em junho.\n");
    } else if (ultimoDigito == 7) {
        printf("O emplacamento deve ser renovado em julho.\n");
    } else if (ultimoDigito == 8) {
        printf("O emplacamento deve ser renovado em agosto.\n");
    } else if (ultimoDigito == 9) {
        printf("O emplacamento deve ser renovado em setembro.\n");
    } else if (ultimoDigito == 0) {
        printf("O emplacamento deve ser renovado em outubro.\n");
    } else {
        printf("Número de placa inválido.\n");
    }
    
return 0;
}
#include <stdio.h>

int main() {
    int numero, kwh, tipo, custoTotal1 = 0, custoTotal2 = 0, custoTotal3 = 0, cont1 = 0, cont2 = 0, cont3 = 0;
    float media1, media2;
    
    printf("Digite o número do consumidor (0 para encerrar): ");
    scanf("%i", &numero);
    
    while(numero != 0) {
        printf("Informe quantidade de kWh consumidos durante o mês: ");
        scanf("%i", &kwh);
        
        printf("Tipo de consumidor\n");
        printf("1 - residencial \t 2 - comercial \t 3 - industrial: ");
        scanf("%i", &tipo);
        
        if(tipo == 1) {
            int preco1 = kwh * 0.3;
            custoTotal1 += preco1;
            cont1++;
        } else if(tipo == 2) {
            int preco2 = kwh * 0.5;
            custoTotal2 += preco2;
            cont2++;
        } else if(tipo == 3) {
            int preco3 = kwh * 0.7;
            custoTotal3 += preco3;
            cont3++;
        } else {
            printf("Tipo de consumidor inválido\n");
        }
        
        printf("Digite o número do consumidor (0 para encerrar): ");
        scanf("%i", &numero);
    }
    
    if(cont1 > 0) {
        media1 = (float)custoTotal1 / cont1;
        printf("A média de consumo para o tipo Residencial foi de R$%.2f\n", media1);
    }
    
    if(cont2 > 0) {
        media2 = (float)custoTotal2 / cont2;
        printf("A média de consumo para o tipo Comercial foi de R$%.2f\n", media2);
    }
    
    printf("O custo total para o consumidor do tipo Residencial foi R$%i\n", custoTotal1);
    printf("O custo total para o consumidor do tipo Comercial foi R$%i\n", custoTotal2);
    printf("O custo total para o consumidor do tipo Industrial foi R$%i\n", custoTotal3);
    
    int custoTotalTodosTipos = custoTotal1 + custoTotal2 + custoTotal3;
    printf("O custo total para todos os tipos de consumidores foi R$%i\n", custoTotalTodosTipos);
    
    return 0;
}

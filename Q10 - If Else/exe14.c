#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float valor, venda, lucro;
    
    printf("Valor do produto: ");
    scanf("%f", &valor);
    
    if(valor < 20){
        lucro = 0.45 * valor;
    } else{
        lucro = 0.30 * valor;
    }
    
    venda = valor + lucro;
    
    printf("O valor de venda do produto é: R$%.2f", venda);
    
return 0;
}
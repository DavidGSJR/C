#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num1, num2, num3;
    
    printf("Digite o 1º número: ");
    scanf("%i", &num1);
    
    printf("Digite o 2º número: ");
    scanf("%i", &num2);
    
    printf("Digite o 3º número: ");
    scanf("%i", &num3);
    
    if(num1>num2 && num1>num3){
        printf("O número %i foi o maior número digitado.", num1);
    } else if(num2>num1 && num2>num3){
        printf("O número %i foi o maior número digitado.", num2);
    } else{
        printf("O número %i foi o maior número digitado.", num3);
    }
    
return 0;
}
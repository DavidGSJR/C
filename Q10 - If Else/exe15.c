#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int idade;
    
    printf("Informe a idade do nadador: ");
    scanf("%i", &idade);
    
    if(idade>=5 && idade<=7){
        printf("Categoria Infantil A");
    } else if(idade>=8 && idade<=10){
        printf("Categoria Infantil B");
    } else if(idade>=11 && idade<=13){
        printf("Categoria Juvenil A");
    } else if(idade>=14 && idade<=17){
        printf("Categoria Juvenil B");
    } else{
        printf("Categoria Maiores de 18 anos");
    }
    
return 0;
}
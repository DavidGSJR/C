#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char nome[50], tipo;
    int dias;
    
    printf("Digite o nome do livro: ");
    scanf("%s", &nome);
    
    printf("Tipo de usuário: 1 - PROFESSOR \t\t 2 - ALUNO\n");
    scanf("%s", &tipo);
    
    if(tipo == 1){
        dias = 10;
    } else if(tipo == 2){
        dias = 3;
    } else{
        printf("Usuário não reconhecido!");
    }
    
    printf("\nRecibo:\n");
    printf("Nome do livro: %s\n", nome);
    printf("Tipo de usuário: %s\n", tipo);
    printf("Total de dias para devolução: %i dias\n", dias);
    
return 0;
}
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char nome[50];
    float nota1, nota2, media;
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    
    printf("Digite sua 1ª nota: ");
    scanf("%f", &nota1);
    
    printf("Digite sua 2ª nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    if(media >= 7){
        printf("Aluno: %s\nNota 1: %.2f\nNota 2: %.2f\nMédia: %.2f\nSituação: Aprovado", nome, nota1, nota2, media);
    } else if(media < 3){
        printf("Aluno: %s\nNota 1: %.2f\nNota 2: %.2f\nMédia: %.2f\nSituação: Reprovado", nome, nota1, nota2, media);
    } else{
        printf("Aluno: %s\nNota 1: %.2f\nNota 2: %.2f\nMédia: %.2f\nSituação: Prova Final", nome, nota1, nota2, media);
    }
    
return 0;
}
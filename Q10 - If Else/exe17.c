#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float jogador1, jogador2, jogador3, soma, media;
    
    printf("Quantos pontos fez o jogador 1: ");
    scanf("%f", &jogador1);
    
    printf("Quantos pontos fez o jogador 2: ");
    scanf("%f", &jogador2);
    
    printf("Quantos pontos fez o jogador 3: ");
    scanf("%f", &jogador3);
    
    soma = jogador1+jogador2+jogador3;
    
    if(jogador1>jogador2 && jogador1>jogador3 && jogador2>jogador3){
        printf("Pontos em ordem decrescente: %.2f, %.2f, %.2f", jogador1, jogador2, jogador3);
    } else if(jogador1>jogador2 && jogador1>jogador3 && jogador3>jogador2){
        printf("Pontos em ordem decrescente: %.2f, %.2f, %.2f", jogador1, jogador3, jogador2);
    } else if(jogador2>jogador1 && jogador2>jogador3 && jogador1>jogador3){
        printf("Pontos em ordem decrescente: %.2f, %.2f, %.2f", jogador2, jogador1, jogador3);
    } else if(jogador2>jogador1 && jogador2>jogador3 && jogador3>jogador1){
        printf("Pontos em ordem decrescente: %.2f, %.2f, %.2f", jogador2, jogador3, jogador1);
    } else if(jogador3>jogador1 && jogador3>jogador2 && jogador1>jogador2){
        printf("Pontos em ordem decrescente: %.2f, %.2f, %.2f", jogador3, jogador1, jogador2);
    } else{
        printf("Pontos em ordem decrescente: %.2f, %.2f, %.2f", jogador3, jogador2, jogador1);
    }
    
    if(soma>100){
        media = (jogador1+jogador2+jogador3)/3;
        printf("\nA média da equipe é de %.2f", media);
    } else{
        printf("\nEquipe desclassificada");
    }
    
return 0;
}
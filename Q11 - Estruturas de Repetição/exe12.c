#include <stdio.h>

int main() {
    
    char nome[50];
    float nota1, nota2, mediaAluno, mediaTurma=0;
    int cont;
    
    
    for(cont=0;cont<=2;cont++){
        printf("Digite o nome do aluno: ");
        scanf("%s", &nome);
        
        printf("Digite a 1ª nota do aluno: ");
        scanf("%f", &nota1);
        
        printf("Digite a 2ª nota do aluno: ");
        scanf("%f", &nota2);
        
        mediaAluno = (nota1 + nota2)/2;
        mediaTurma = mediaTurma + mediaAluno;
        
        printf("Nome: %s \t Nota 1: %.2f \t Nota 2: %.2f \t Média: %.2f\n", nome, nota1, nota2, mediaAluno);
        
    }
    mediaTurma = mediaTurma/cont;
    
    printf("A média da turma foi de: %.2f", mediaTurma);
    
    return 0;
}

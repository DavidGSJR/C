#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char nome[50], sexo;
    int idade;

    for (int cont = 0; cont < 3; cont++) {
        printf("Informe o nome da pessoa %d: ", cont + 1);
        scanf("%s", nome[cont]);
        
        printf("Informe a idade da pessoa %d: ", cont + 1);
        scanf("%d", &idade[cont]);
        
        printf("M - Masculino \t F - Feminino\n");
        scanf(" %c", &sexo[cont]); 
        sexo[cont] = toupper(sexo[cont]);
    }
    
    printf("Pessoas do sexo masculino com mais de 21 anos:\n");
    for (int cont = 0; cont < 3; cont++) {
        if (sexo[cont] == 'M' && idade[cont] > 21) {
            printf("%s, ", nome[cont]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota;
    char conceito;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 0 && nota <= 10) {
        int notaInteira = (int)nota;

        switch (notaInteira) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                conceito = 'D';
                break;
            case 5:
            case 6:
                conceito = 'C';
                break;
            case 7:
            case 8:
                conceito = 'B';
                break;
            case 9:
            case 10:
                conceito = 'A';
                break;
            default:
                printf("Nota fora do intervalo permitido.\n");
                return 1;
        }

        printf("O conceito do aluno é: %c\n", conceito);
    } else {
        printf("Nota fora do intervalo permitido.\n");
    }

    return 0;
}
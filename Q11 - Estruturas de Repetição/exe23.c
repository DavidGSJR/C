#include <stdio.h>

int main() {
    int contador = 0;
    int alunosAcimaDespesa = 0;
    int alunosRendaPessoalMaior = 0;
    float percentualGastoAlimentacao = 0;
    float percentualGastoOutrasDespesas = 0;

    while (1) {
        float rendaPessoal, rendaFamiliar, gastoAlimentacao, gastoOutrasDespesas;

        printf("Informe a renda pessoal do aluno (0 para encerrar): ");
        scanf("%f", &rendaPessoal);

        if (rendaPessoal == 0) {
            break;
        }

        printf("Informe a renda familiar do aluno: ");
        scanf("%f", &rendaFamiliar);

        printf("Informe o total gasto com alimentação pelo aluno: ");
        scanf("%f", &gastoAlimentacao);

        printf("Informe o total gasto com outras despesas pelo aluno: ");
        scanf("%f", &gastoOutrasDespesas);

        if (gastoOutrasDespesas > 200.0) {
            alunosAcimaDespesa++;
        }

        if (rendaPessoal > rendaFamiliar) {
            alunosRendaPessoalMaior++;
        }

        percentualGastoAlimentacao += (gastoAlimentacao / rendaPessoal) * 100;
        percentualGastoOutrasDespesas += (gastoOutrasDespesas / rendaFamiliar) * 100;

        contador++;
    }

    if (contador > 0) {
        percentualGastoAlimentacao /= contador;
        percentualGastoOutrasDespesas /= contador;
    }

    printf("Porcentagem de alunos que gastam acima de R$200,00 com outras despesas: %.2f%%\n", (float)alunosAcimaDespesa / contador * 100);
    printf("Número de alunos com renda pessoal maior que a renda familiar: %d\n", alunosRendaPessoalMaior);
    printf("Porcentagem gasta com alimentação em relação à renda pessoal: %.2f%%\n", percentualGastoAlimentacao);
    printf("Porcentagem gasta com outras despesas em relação à renda familiar: %.2f%%\n", percentualGastoOutrasDespesas);

    return 0;
}

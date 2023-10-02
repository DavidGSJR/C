#include <stdio.h>

int main() {
    int numPaises = 30;
    int numJogadores = 12;

    float pesoMedio[numPaises];
    float idadeMedia[numPaises];
    float pesoMaisPesado[numPaises];
    float idadeMaisJovem[numPaises];

    float pesoTotal = 0;
    float idadeTotal = 0;

    for (int i = 0; i < numPaises; i++) {
        printf("País %d:\n", i + 1);

        float pesoTime = 0;
        float idadeTime = 0;
        float jogadorMaisPesado = 0;
        float jogadorMaisJovem = 999; // Inicializado com um valor alto para garantir que será substituído.

        for (int j = 0; j < numJogadores; j++) {
            printf("Informe o peso do jogador %d: ", j + 1);
            float peso;
            scanf("%f", &peso);
            pesoTime += peso;

            printf("Informe a idade do jogador %d: ", j + 1);
            float idade;
            scanf("%f", &idade);
            idadeTime += idade;

            if (peso > jogadorMaisPesado) {
                jogadorMaisPesado = peso;
            }

            if (idade < jogadorMaisJovem) {
                jogadorMaisJovem = idade;
            }
        }

        pesoMedio[i] = pesoTime / numJogadores;
        idadeMedia[i] = idadeTime / numJogadores;
        pesoMaisPesado[i] = jogadorMaisPesado;
        idadeMaisJovem[i] = jogadorMaisJovem;

        pesoTotal += pesoTime;
        idadeTotal += idadeTime;
    }

    printf("\nInformações por país:\n");
    for (int i = 0; i < numPaises; i++) {
        printf("País %d:\n", i + 1);
        printf("Peso Médio: %.2f\n", pesoMedio[i]);
        printf("Idade Média: %.2f\n", idadeMedia[i]);
        printf("Atleta Mais Pesado: %.2f\n", pesoMaisPesado[i]);
        printf("Atleta Mais Jovem: %.2f\n", idadeMaisJovem[i]);
        printf("\n");
    }

    float pesoMedioTotal = pesoTotal / (numPaises * numJogadores);
    float idadeMediaTotal = idadeTotal / (numPaises * numJogadores);

    printf("Informações globais:\n");
    printf("Peso Médio de Todos os Participantes: %.2f\n", pesoMedioTotal);
    printf("Idade Média de Todos os Participantes: %.2f\n", idadeMediaTotal);

    return 0;
}

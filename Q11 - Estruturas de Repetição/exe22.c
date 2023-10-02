#include <stdio.h>

int main() {
    int timeFav, cidade, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, outrosRj=0, niteroiFlu=0;
    float totalSalario=0, mediaSalarial, salario;

    while (1) {
        printf("Qual o seu time de coração? (0 encerra o programa)\n");
        printf("1 - Fluminense \t 2 - Botafogo \t 3 - Vasco \t 4 - Flamengo \t 5-Outros\n");
        scanf("%i", &timeFav);
        
        if (timeFav == 0) {
            printf("Encerrando o programa.\n");
            break;
        }
        
        printf("Onde você mora?\n");
        printf("1 - RJ \t 2 - Niterói \t 3-Outros\n");
        scanf("%i", &cidade);
        
        printf("Qual o seu salário?\n");
        scanf("%f", &salario);
        
        
        if(timeFav==1){
            cont1++;
        } else if(timeFav==2){
            cont2++;
            totalSalario += salario;
            mediaSalarial = totalSalario/cont2;
        } else if(timeFav==3){
            cont3++;
        } else if(timeFav==4){
            cont4++;
        } else if(timeFav==5){
            cont5++;
        } else{
            printf("Opção inválida!");
        }
        
        if(timeFav==5 && cidade==1){
            outrosRj++;
        }
        if(timeFav==1 && cidade==2){
            niteroiFlu++;
        }
        
    }
    
    printf("O número de torcedores do Fluminense são de: %i\n", cont1);
    printf("O número de torcedores do Botafogo são de: %i\n", cont2);
    printf("O número de torcedores do Vasco são de: %i\n", cont3);
    printf("O número de torcedores do Flamengo são de: %i\n", cont4);
    printf("O número de torcedores do Outros são de: %i\n", cont5);
    printf("\n");
    printf("A média salarial dos torcedores do Botafogo é de: %.2f\n", mediaSalarial);
    printf("\n");
    printf("O número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes é de: %i\n", outrosRj);
    printf("\n");
    printf("O número de pessoas de Niterói torcedoras do Fluminense é de: %i\n", niteroiFlu);
    
    
    return 0;
}

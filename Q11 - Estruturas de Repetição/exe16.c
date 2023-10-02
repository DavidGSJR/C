#include <stdio.h>

int main() {
    int paisA=5000000, paisB=7000000, natalidadePaisA, natalidadePaisB, anos=0;
    
    while(paisA<=paisB){
        natalidadePaisA = paisA * 3/100;
        natalidadePaisB = paisB * 2/100;
        
        paisA = paisA + natalidadePaisA;
        paisB = paisB + natalidadePaisB;
        
        anos++;
    }
    printf("O tempo que o País A ultrapasse o País B é de %i anos", anos);

    return 0;
}

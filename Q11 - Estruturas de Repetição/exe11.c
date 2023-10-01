#include <stdio.h>

int main() {
    
    int termo1=1, termo2=1, proximoTermo, cont;
    
    printf("1\n");
    printf("1\n");
    
    for(cont=3;cont<=20;cont++){
        proximoTermo = termo1 + termo2;
        
        printf("%d\n", proximoTermo);
        
        termo1 = termo2;
        termo2 = proximoTermo;
    }
    
    
    return 0;
}

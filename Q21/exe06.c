#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int consoanteOuVogal(char letra);


int main(){
   	setlocale(LC_ALL, "Portuguese");

 	char letra;
 	
 	printf("Informe uma letra para saber se é vogal ou consoante: ");
 	scanf("%c", &letra);
 	
 	int resultado = consoanteOuVogal(letra);
 	
 	if (resultado == 1) {
        printf("A letra '%c' é uma vogal.\n", letra);
    } else if (resultado == 0) {
        printf("A letra '%c' é uma consoante.\n", letra);
    } else {
        printf("A letra '%c' não é uma letra válida.\n", letra);
    }

	return 0;
}

int consoanteOuVogal(char letra){
	letra = tolower(letra);
	
	if (isalpha(letra)) {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            return 1;
        } else {
            return 0;
        }
    } else {
        return -1;
    }
}

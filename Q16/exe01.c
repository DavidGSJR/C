#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	char palavra1[50], palavra2[50];
	int cont1, cont2;
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra1);
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra2);
	
	cont1 = strlen(palavra1);
	cont2 = strlen(palavra2);
	
	if(cont1 == cont2){
		if(strcmp(palavra1, palavra2)==0){
			printf("As palavras %s e %s são iguais e possuem %d e %d caracteres respectivamente", palavra1, palavra2, cont1, cont2);
		} else{
			printf("As palavras %s e %s são diferentes, porem tem o mesmo tamanho %d e %d caracteres respectivamente", palavra1, palavra2, cont1, cont2);
		}
	} else{
		printf("As palavras %s e %s são diferentes e possuem %d e %d caracteres", palavra1, palavra2, cont1, cont2);
	}
	
	
	
	return 0;
}

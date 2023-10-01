#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	for(cont=5;cont<=500;cont+=5){
	    printf("%i ", cont);
	}
	
	return 0;
}
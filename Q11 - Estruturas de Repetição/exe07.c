#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	for(cont=100;cont>=2;cont-=2){
	    printf("%i ", cont);
	}
	
	return 0;
}
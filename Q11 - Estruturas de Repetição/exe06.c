#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	for(cont=1;cont<=100;cont++){
	    printf("%i ", cont);
	}
	
	return 0;
}
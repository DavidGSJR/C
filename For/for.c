#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	for(cont=30;cont>10;cont-=2){
		printf("%d ", cont);
	}
	
	return 0;
}

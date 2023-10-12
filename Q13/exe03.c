#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, soma=0;
	
	for(cont=1;cont<=100;cont++){
		if(cont%2==0){
			soma+=cont;
		}
	}
	printf("%d ", soma);
	
	return 0;
}

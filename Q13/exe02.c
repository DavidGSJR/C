#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int multiplo=0, cont;

	for (cont=1;cont<=5;cont++){
		multiplo = multiplo + 3;
		printf("%d ", multiplo);
	}

	return 0;
}

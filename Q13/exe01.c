#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, potencia;
	
	for(cont=15;cont<=200;cont++){
		potencia = pow(cont, 2);
		printf("%d ^ 2 = %d\n", cont, potencia);
	}
	
	return 0;
}

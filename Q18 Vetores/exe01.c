#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	float salario[20], novoSalario[20];
	
	for(cont=0;cont<20;cont++){
		printf("informe o salario da %iª pessoa: ", cont+1);
		scanf("%f", &salario[cont]);
		
		novoSalario[cont] = salario[cont] + (salario[cont]* 0.08);
	}
	
	printf("SALARIO\t\tNOVO SALÁRIO\n\n");
	
	for(cont=0;cont<20;cont++){
		printf("%.2f\t\t%.2f\n", salario[cont], novoSalario[cont]);
	}
	
	return 0;
}

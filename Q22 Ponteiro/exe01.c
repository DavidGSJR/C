#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	
int main(){
   	setlocale(LC_ALL, "Portuguese");
	
	int var1, var2;
	
	printf("O endereço de VAR 1 é: %p.\n", &var1);
	printf("O endereço de VAR 2 é: %p.\n", &var2);
	
	if(&var1>&var2){
		printf("O endereço de VAR 1 é maior que o endereço de VAR 2");
	} else{
		printf("O endereço de VAR 2 é maior que o endereço de VAR 1");
	}
		
	return 0;
}


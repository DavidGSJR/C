#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	
int main(){
   	setlocale(LC_ALL, "Portuguese");
	
	int var1, var2;
	
	printf("O endere�o de VAR 1 �: %p.\n", &var1);
	printf("O endere�o de VAR 2 �: %p.\n", &var2);
	
	if(&var1>&var2){
		printf("O endere�o de VAR 1 � maior que o endere�o de VAR 2");
	} else{
		printf("O endere�o de VAR 2 � maior que o endere�o de VAR 1");
	}
		
	return 0;
}


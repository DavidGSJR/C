#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	
int main(){
   	setlocale(LC_ALL, "Portuguese");
	
	int *pNum;
	int num, num2;
	pNum = &num;
	*pNum = 10;
	num2 = 20;
	num2 += *pNum;
	
	printf("Conteúdo de num: %d\n", num);
	printf("Endereço de num: %p\n", &num);
	printf("Conteúdo de num2: %d\n", num2);
	printf("Endereço de num2: %p\n", num2);
	
	printf("\nConteúdo de pNum: %p\n", pNum);
	printf("Conteúdo do apontamento de pNum: %d\n", *pNum);
	printf("Endereço de pNum: %p\n", &pNum);
	
	return 0;
}


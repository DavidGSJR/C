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
	
	printf("Conte�do de num: %d\n", num);
	printf("Endere�o de num: %p\n", &num);
	printf("Conte�do de num2: %d\n", num2);
	printf("Endere�o de num2: %p\n", num2);
	
	printf("\nConte�do de pNum: %p\n", pNum);
	printf("Conte�do do apontamento de pNum: %d\n", *pNum);
	printf("Endere�o de pNum: %p\n", &pNum);
	
	return 0;
}


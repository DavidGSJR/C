#include <stdio.h>

int main(){

   char nome[50];
   int i = 0;

   printf("Digite seu nome: "); 
   scanf("%[^\n]c", nome);

       do{

           printf("%c\n",nome[i]);

           i++;

       } while (nome[i] != '\0');

}

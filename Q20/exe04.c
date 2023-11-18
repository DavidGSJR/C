		#include<stdio.h>
		#include<stdlib.h>
		#include<locale.h>
		#include<conio.h>
		
		struct agenda{
		 char nome[99], sobrenome[200], telefoneMovel[99], telefoneFixo[99], email[99];
		};
		
		typedef struct agenda Telefones;
		
		int main(){
		setlocale(LC_ALL, "Portuguese");
		
		 Telefones tel[100];
		 int i;
		
		 for(i=0;i<100;i++){
		 printf("Informe o nome da %dº pessoa: ", i+1);
		 fflush(stdin);
		 scanf("%[^\n]s", &tel[i].nome);
		
		 printf("Informe o sobrenome do(a) %s: ", tel[i].nome);
		 fflush(stdin);
		 scanf("%[^\n]s", &tel[i].sobrenome);
		 
		 printf("Informe o número de telefone móvel do(a) %s: ", tel[i].nome);
		 fflush(stdin);
		 scanf("%[^\n]s", &tel[i].telefoneMovel);
		 
		 printf("Informe o número de telefone fixo do(a) %s: ", tel[i].nome);
		 fflush(stdin);
		 scanf("%[^\n]s", &tel[i].telefoneFixo);
		 
		 printf("Informe o email do(a) %s: ", tel[i].nome);
		 fflush(stdin);
		 scanf("%[^\n]s", &tel[i].email);
		
		 system("cls");
		
		 }
		
		 system("cls");
		 
		 printf("Lista Telefônica: \n");
		 
		for(i=0;i<100;i++){			
			printf("\nNome: %s", tel[i].nome);
			printf("\nSobrenome: %s", tel[i].sobrenome);
			printf("\nTelefone Móvel: %s", tel[i].telefoneMovel);
			printf("\nEmail: %s", tel[i].email);
			printf("\n");
		}
		
		return 0;
	}

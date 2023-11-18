		#include<stdio.h>
		#include<stdlib.h>
		#include<locale.h>
		#include<conio.h>
		
		struct esporte{
		 int idade;
		 char nome[99], esporte[99];
		 float altura;
		};
		
		typedef struct esporte Atleta;
		
		int main(){
		setlocale(LC_ALL, "Portuguese");
		
		 Atleta atleta[5];
		 float maiorAltura=0, maiorIdade=0;
		 int i=0, altura=0, idade=0;
		
		 for(i=0;i<5;i++){
		 printf("Informe o nome do %dº atleta: ", i+1);
		 fflush(stdin);
		 scanf("%[^\n]s", &atleta[i].nome);
		
		  printf("Informe o esporte do %dº atleta: ", i+1);
		 fflush(stdin);
		 scanf("%[^\n]s", &atleta[i].esporte);
		
		 printf("Informe a idade do %dº atleta: ", i+1);
		 scanf("%d", &atleta[i].idade);
		
		 printf("Informe a altura do %dº atleta: ", i+1);
		 scanf("%f", &atleta[i].altura);
		
		 system("cls");
		
		 }
		
		 system("cls");
		
		for(i = 0; i < 5; i++) {
	    if(maiorAltura < atleta[i].altura) {
	        maiorAltura = atleta[i].altura;
	        altura = i;
	    }
	
	    if(maiorIdade < atleta[i].idade) {
	        maiorIdade = atleta[i].idade;
	        idade = i;
	    }
	}
	
	
		printf("\nAtleta com maior altura: ");
		printf("\nNome: %s", atleta[altura].nome);
		printf("\nEsporte: %s", atleta[altura].esporte);
		printf("\nIdade: %d", atleta[altura].idade);
		printf("\nAltura: %.2f", atleta[altura].altura);
		
		printf("\n");
		
		printf("\nAtleta com maior idade: ");
		printf("\nNome: %s", atleta[idade].nome);
		printf("\nEsporte: %s", atleta[idade].esporte);
		printf("\nIdade: %d", atleta[idade].idade);
		printf("\nAltura: %.2f", atleta[idade].altura);
		
		return 0;
		}

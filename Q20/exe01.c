#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

struct aluno{
 int matricula;
 char nome[99];
 float nota1, nota2, nota3, media;
};

typedef struct aluno pessoa;

int main(){
   (LC_ALL, "Portuguese");

 pessoa aluno[5];
 float maiorMedia=0;
 int i=0, indice=0;

 for(i=0;i<5;i++){
 printf("Informe o nome do %dº aluno: ", i+1);
 fflush(stdin);
 scanf("%[^\n]s", &aluno[i].nome);

  printf("Informe a matricula do %d aluno: ", i+1);
 scanf("%d", &aluno[i].matricula);

 printf("Informe a nota da prova 1 do %d aluno: ", i+1);
 scanf("%f", &aluno[i].nota1);

 printf("Informe a nota da prova 2 do %d aluno: ", i+1);
 scanf("%f", &aluno[i].nota2);

 printf("Informe a nota da prova 3 do %d aluno: ", i+1);
 scanf("%f", &aluno[i].nota3);

 aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;

 system("cls");

 }

 system("cls");

for(i=0;i<5;i++){
if(maiorMedia<aluno[i].media){
	maiorMedia = aluno[i].media;
	indice = i; 
}

}
printf("\nNome %s: ", aluno[indice].nome);
printf("\nNota prova 1: %.2f \nNota prova 2: %.2f \nNota prova 3: %.2f: ", aluno[indice].nota1, aluno[indice].nota2, aluno[indice].nota3);

return 0;
}

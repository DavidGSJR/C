		#include<stdio.h>
		#include<stdlib.h>
		#include<locale.h>
		#include<conio.h>
		
		struct clubeSocial{
		 int dia, mes, ano, qtdDependente;
		 char nome[99];
		 float valorMensalidade;
		};
		
		typedef struct clubeSocial Associado;
		
		int main(){
		setlocale(LC_ALL, "Portuguese");
		
		 Associado associado[37];
		 int i, maiorQtdDependente, indice=0;
		
		 for(i=0;i<37;i++){
		 printf("Informe o nome do %dº associado: ", i+1);
		 fflush(stdin);
		 scanf("%[^\n]s", &associado[i].nome);
		
		 printf("Informe o dia de nascimento do %dº associado: ", i+1);
		 scanf("%d", &associado[i].dia);
		 
		 printf("Informe o mês de nascimento do %dº associado: ", i+1);
		 scanf("%d", &associado[i].mes);
		 
		 printf("Informe o ano de nascimento do %dº associado: ", i+1);
		 scanf("%d", &associado[i].ano);
		
		 printf("Informe valor da mensalidade do %dº associado: ", i+1);
		 scanf("%f", &associado[i].valorMensalidade);
		 
		 printf("Informe quantidade de dependentes do %dº associado: ", i+1);
		 scanf("%d", &associado[i].qtdDependente);
		
		 system("cls");
		
		 }
		
		 system("cls");
		 
		 printf("Associados: \n");
		 
		for(i=0;i<37;i++){			
			printf("\nNome: %s", associado[i].nome);
			printf("\nDia: %d Mês: %d Ano: %d", associado[i].dia, associado[i].mes, associado[i].ano);
			printf("\nValor da mensalidade: %.2f", associado[i].valorMensalidade);
			printf("\nQuantidade de dependentes: %d", associado[i].qtdDependente);
			printf("\n");
		}
		 		
		for(i=0;i<37;i++){
			if(maiorQtdDependente<associado[i].qtdDependente){
				maiorQtdDependente = associado[i].qtdDependente;
				indice = i; 
			}
		}
	
	
		printf("\nAssociado com maior quantidade de dependentes: ");
		printf("\nNome: %s", associado[indice].nome);
		printf("\nDia: %d Mês: %d Ano: %d", associado[indice].dia, associado[indice].mes, associado[indice].ano);
		printf("\nValor da mensalidade: %.2f", associado[indice].valorMensalidade);
		printf("\nQuantidade de dependentes: %d", associado[indice].qtdDependente);
			
		return 0;
		}

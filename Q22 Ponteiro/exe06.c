#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
 
void maiorNumero (int *vet, int *maior1, int *maior2) { 
	int i, j, aux; 
	
	for (i = 0; i < 4; i++) { 
		for (j = i + 1; j < 4; j++) { 
			if (vet[i] < vet[j]) { 
				aux = vet[i]; 
				vet[i] = vet[j]; 
				vet[j] = aux; 
			} 
		} 
	} 
	
	*maior1 = vet[0]; 
	*maior2 = vet[1];
	 
} 
void main () { 
	setlocale(LC_ALL, "Portuguese");
	
	int vNum[4]; 
	int i, nMaior1, nMaior2;
	 
	for (i = 0; i < 4; i++) { 
		printf ("Informe o valor inteiro %d: \n", i + 1); 
		scanf ("%d", &vNum[i]); 
	} 
	
	maiorNumero(vNum, &nMaior1, &nMaior2); 
	printf ("\nOs dois maiores valores são: %d e %d \n", nMaior1, nMaior2); 
}

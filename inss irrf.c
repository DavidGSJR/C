#include <stdio.h>
int main(){
	float salarioBruto, inss, irrf, salarioLiquido;
	
	printf("Informe o seu salario bruto: ");
	scanf("%f", &salarioBruto);
	
	if(salarioBruto<=1320){
		inss = (salarioBruto* 0.075);
	} else if(salarioBruto>=1320.01 && salarioBruto<=2571.29){
		inss = (salarioBruto * 0.09) - 19.80;
	} else if(salarioBruto >= 2571.30 && salarioBruto <= 3856.94){
		inss = (salarioBruto * 0.12) - 96.94;
	} else if (salarioBruto >= 3856.95 && salarioBruto <= 7507.49){
		inss = (salarioBruto * 0.14) - 174.08;
	} else{
		inss = 877.24;
	}
	
	if(salarioBruto<=2112){
		irrf = 0;
	} else if(salarioBruto>=2112.01 && salarioBruto<=2826.65){
		irrf = (salarioBruto * 0.075) - 158.40;
	} else if(salarioBruto>=2826.66 && salarioBruto<=3751.05){
		irrf = (salarioBruto * 0.15) - 370.40;
	} else if(salarioBruto>=3751.06 && salarioBruto<=4664.68){
		irrf = (salarioBruto * 0.225) - 651.73;
	} else{
		irrf = (salarioBruto * 0.275) - 884.96;
	}
	
	salarioLiquido = salarioBruto - inss - irrf;
	
	printf("\nO desconto do INSS foi de: %.2f", inss);
	printf("\nO desconto do IRRF foi de: %.2f", irrf);
	printf("\nO seu salario liquido é de: %.2f", salarioLiquido);
	
	return 0;
}

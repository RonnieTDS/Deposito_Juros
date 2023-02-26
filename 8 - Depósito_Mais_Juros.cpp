
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float deposito,taxa,rendimento,total_rendimento;
	printf("Informe o valor do depósito: %f\n");
	scanf("%f",&deposito);
	
	deposito=deposito;
	
	printf("Informe o valor da taxa de juros: %f\n");
	scanf("%f",&taxa);
	
	taxa = taxa;
	rendimento = deposito * taxa/100; 
	printf("Valor do rendimento  : %.2f\n",rendimento);
	
	total_rendimento = deposito + rendimento; 
	printf("Valor do total rendimento  : %.2f\n",total_rendimento);
	
	
	return 0;
}

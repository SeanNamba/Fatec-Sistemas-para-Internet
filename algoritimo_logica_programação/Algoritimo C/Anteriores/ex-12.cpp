#include<stdio.h>
#include<stdlib.h>
main ()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	printf("Digite a quantidade de aulas dadas: ");
	scanf("%f",&qtde);
	printf("Digite o percentual de INSS: ");
	scanf("%f",&inss);
	sal_bruto = hora_aula * qtde;
	desc = sal_bruto * inss / 100;
	sal_liq = sal_bruto - desc;
	printf("O salario bruto e: %.2f\n", sal_bruto);
	printf("O total de desconto de INSS e: %.2f\n", desc);
	printf("O salario liquido e: %.2f\n", sal_liq);
	
}


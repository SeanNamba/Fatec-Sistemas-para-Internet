#include<stdio.h>
#include<stdlib.h>
main ()
{
	float real, dolar, real_dolar;
	printf("Digite o valor do produto: ");
	scanf("%f",&real);
	printf("Digite o valor do dolar corrente: ");
	scanf("%f",&dolar);
	real_dolar = real / dolar;
	printf("O valor do produto em dolar e %.2f",real_dolar);
}


#include<stdio.h>
#include<stdlib.h>
main ()
{
	int anos, meses, dias, total_dias;
	printf("Digite quantos anos a pessoa tem: ");
	scanf("%d",&anos);
	printf("Digite quantos meses a pessoa tem: ");
	scanf("%d",&meses);
	printf("Digite quantos dias a pessoa tem: ");
	scanf("%d",&dias);
	total_dias = anos * 365 + meses * 30 + dias;
	printf("O total de dias que esta pessoa ja viveu e: %d", total_dias);
}


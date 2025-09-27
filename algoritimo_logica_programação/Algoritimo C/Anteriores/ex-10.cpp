#include<stdio.h>
#include<stdlib.h>
main ()
{
	int n1, n2;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	if (n1 > n2)
	{
		printf("O numero maior e o %d",n1);
	}
	if (n2 > n1)
	{
		printf("O numero maior e o %d",n2);
	}
	if (n1 == n2)
	{
		printf("Os numeros sao iguais");
	}
}


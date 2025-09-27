#include<stdio.h>
#include<stdlib.h>
main ()
{
	float n1, n2, d;
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	if (n2 == 0)
		printf("Impossivel dividir por ZERO");
	else
	{
		d = n1 / n2;
		printf("Divisao de %f e %f = %f",n1,n2,d);
	}
	
}


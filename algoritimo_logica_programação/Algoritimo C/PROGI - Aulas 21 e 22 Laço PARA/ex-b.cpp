#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, i, dobro;
	for (i=1; i<=5; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &a);
		dobro=a*2;
		printf("Dobro e = %d\n",dobro);
	}
}


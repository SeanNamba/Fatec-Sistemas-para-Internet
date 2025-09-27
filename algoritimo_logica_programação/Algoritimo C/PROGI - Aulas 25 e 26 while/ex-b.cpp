#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, i=1, dobro;
	//for (i=1; i<=5; i++)
	do
	{
		printf("Digite um numero: ");
		scanf("%d", &a);
		dobro=a*2;
		printf("Dobro e = %d\n",dobro);
		i = i + 1;
	}
	while (i<=5);
}


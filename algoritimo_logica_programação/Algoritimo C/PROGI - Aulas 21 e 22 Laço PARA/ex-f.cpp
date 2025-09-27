#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, i, soma=0;
	for (i=2; i<=500; i=i+2)
	{
		soma=soma+i;
	}
	printf("A soma dos numeros pares de 1 ate 500 = %d \n", soma);
	system("pause");
}


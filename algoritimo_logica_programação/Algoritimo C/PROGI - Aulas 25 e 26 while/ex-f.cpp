#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, i=2, soma=0;
	//for (i=2; i<=500; i=i+2)
	do
	{
		soma=soma+i;
		i = i + 2;
	}
	while (i<=500);
	printf("A soma dos numeros pares de 1 ate 500 = %d \n", soma);
	system("pause");
}


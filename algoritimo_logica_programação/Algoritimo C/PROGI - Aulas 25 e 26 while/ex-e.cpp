#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, i=15, quadrado;
	//for (i=15; i<=200; i++)
	do
	{
		quadrado=i*i;
		printf("%d ", quadrado);
		i = i + 1;
		_sleep(100);
	}
	while (i<=200);
}


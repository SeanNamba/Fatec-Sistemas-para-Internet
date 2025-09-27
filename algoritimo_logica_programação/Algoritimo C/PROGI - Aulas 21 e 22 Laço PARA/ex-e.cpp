#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, i, quadrado;
	for (i=15; i<=200; i++)
	{
		quadrado=i*i;
		printf("%d ", quadrado);
		_sleep(300);
	}
}


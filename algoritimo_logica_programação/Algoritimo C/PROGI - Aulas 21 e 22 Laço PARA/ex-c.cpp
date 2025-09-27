#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, i;
	printf("Digite um numero: ");
	scanf("%d", &a);
	if (a<1)
		printf("Impossivel calcular");
	else
	for (i=1; i<=a; i++)
	{
		printf("%d ", i);
		_sleep(300);
	}
}


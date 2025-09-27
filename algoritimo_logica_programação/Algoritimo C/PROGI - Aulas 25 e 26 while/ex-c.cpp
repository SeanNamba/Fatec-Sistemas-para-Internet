#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a, i=1;
	printf("Digite um numero: ");
	scanf("%d", &a);
	if (a<1)
		printf("Impossivel calcular");
	else
	//for (i=1; i<=a; i++)
	do
	{
		printf("%d ", i);
		i = i + 1;
		_sleep(100);
	}
	while (i<=a);
}


#include<stdio.h>
#include<stdlib.h>
main ()
{
	int i, a, m;
	printf("Digite um numero: ");
	scanf("%d", &a);
	//for (i=1; i<=10; i++)
	do
	{
		m=i*a;
		printf("%d x %d = %d\n", a, i, m);
		i = i + 1;
		_sleep(200);
	}
	while (i<=10);
}


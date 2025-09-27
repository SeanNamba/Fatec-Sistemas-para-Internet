#include<stdio.h>
#include<stdlib.h>
main ()
{
	int i, n, res, cont=0;
	printf("Digite um numero: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		res = n % i;
		if (res==0)
		cont++;
	}
	if (cont<=2)
		printf("Numero e primo\n\n");
	else
		printf("Numero nao e primo\n\n");
	system("pause");
}
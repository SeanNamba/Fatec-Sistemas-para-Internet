#include<stdio.h>
#include<stdlib.h>
main ()
{
	int n;
	printf("Numeros entre 1000 e 2020 que divididos por 11 tem resto 5: \n");
	for (n=1000; n<=2020; n++)
	{
		if (n % 11 == 5) {
			printf("%d\n", n);
		}
	}
	system("pause");
}


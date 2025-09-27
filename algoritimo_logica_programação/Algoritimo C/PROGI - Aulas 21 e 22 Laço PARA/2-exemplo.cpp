#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a;
	for (a=15; a>=1; a--)
	{
		printf("%d ", a);
		_sleep(300);
	}
	printf("\n\n");
	system("PAUSE");
}


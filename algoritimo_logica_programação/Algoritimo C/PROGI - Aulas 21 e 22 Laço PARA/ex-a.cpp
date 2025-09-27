#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a;
	for (a=1; a<=100; a=a+2)
	{
		printf("%d ", a);
		_sleep(300);
	}
	printf("\n\n");
	system("PAUSE");
}


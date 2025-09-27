#include<stdio.h>
#include<stdlib.h>
main ()
{
	int a;
	//for (a=1; a<=100; a=a+2)
	do 
	{
		printf("%d ", a);
		a = a + 2;
		_sleep(300);
	}
	while (a<=100);
	printf("\n\n");
	system("PAUSE");
}


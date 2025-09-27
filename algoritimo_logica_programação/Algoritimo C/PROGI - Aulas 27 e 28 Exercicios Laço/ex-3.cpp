#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int i;
	float n1, mult;
	printf("Digite o valor da foto: ");
	scanf("%f", &n1);
	for (i=1;i<=50;i++)
	{
		if (i==11 || i==21 || i==31 || i==41)
			printf("\n\n");
		if (i<10) 
			printf("%d fotos = %5.2f - ", i, n1*i);
		if (i>=10 && i<20) 
			printf("%d fotos = %5.2f - ", i , (n1-0.03)*i);
		if (i>=20) 
			printf("%d fotos = %5.2f - ", i, (n1-0.04)*i);
	}
	printf("\n\n");
	system("pause");
}


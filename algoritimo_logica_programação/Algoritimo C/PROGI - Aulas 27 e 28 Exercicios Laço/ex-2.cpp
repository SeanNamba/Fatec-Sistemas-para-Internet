#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int a, i, soma=0;
	do {
		printf("Digite um numero menor que 100: ");
		scanf("%d", &a);
		if (a<100) {
			for (i=a;i<=100;i++) 
			{
				soma=soma+i;
			}
			printf("A soma de %d ate 100 = %d\n", a, soma);	
		}	
	} while (a>100);
	system("pause");
}


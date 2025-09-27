#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int i;
	int vet[5];
	printf("Digite 5 numeros para o vetor: \n\n");
	scanf("%d", &vet[0]);
	scanf("%d", &vet[1]);
	scanf("%d", &vet[2]);
	scanf("%d", &vet[3]);
	scanf("%d", &vet[4]);
	for (i=0;i<5;i++)
	{
		printf("Valor de vet[%d] = %d\n", i, vet[i]);
	}

	system("pause");
}
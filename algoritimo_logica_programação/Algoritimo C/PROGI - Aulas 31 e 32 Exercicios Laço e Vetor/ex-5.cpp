#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
main ()
{
	int n=20, i;
	int vet[n], vetpar[n], vetimp[n], npar=0, nimp=0, contpar=0, contimp=0;
	system("color F0");
	srand(time(NULL));
	for (i=0; i<n; i++)
	{
		vet[i] = rand() % 20;
		
		if (vet[i] %2 == 0)
		{	
			vetpar[contpar] = vet[i];
			contpar++;		
		}
		else 
		{
			vetimp[contimp] = vet[i];
			contimp++;
		}
	}
	
	for (i=contpar ; i<n; i++)
	{
		vetpar[i] = 0;
	}
	for (i=contimp; i<n; i++)
	{
		vetimp[i] = 0;
	}
	
	printf("\nVetor original: ");
	for (i=0; i<n; i++)
	{
		printf("%d ", vet[i]);
	}
	
	printf("\n\nVetor de pares: ");
	for (i=0; i<n; i++)
	{
		printf("%d ", vetpar[i]);
	}
	
	printf("\n\nVetor de impares: ");
	for (i=0; i<n; i++)
	{
		printf("%d ", vetimp[i]);
	}
	
	
	getch();
}
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int n, i;
	printf("Digite um tamanho para o Vetor: ");
	scanf("%d", &n);
	int vet[n];
	printf("Digite os %d valores do Vetor: \n", n);
	for (i=0; i < n; i++) {
		scanf("%d", &vet[i]);
	}
	for (i=0; i < n; i++) {
		printf("Valor de vet[%d] = %d\n", i, vet[i]);
	}
	system("pause");
}
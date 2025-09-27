#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int n1, n2, soma=0;
	char op='s';
	
	while(op=='s') {
		printf("Digite o primeiro numero: ");
		scanf("%d", &n1);
		printf("Digite o segundo numero: ");
		scanf("%d", &n2);
		if (n1>n2) {
			printf("O maior numero entre os dois e: %d\n", n1);
		}
		else {
			printf("O maior numero entre os dois e: %d\n", n2);
		}
		printf("Deseja continuar? (s/n): ");
		op = getche();
		printf("\n\n");
	}
	printf("\n\n");
}


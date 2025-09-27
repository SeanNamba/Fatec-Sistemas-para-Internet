#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int a, n, soma=0;
	char op='s';
	
	while(op=='s') {
		printf("Digite um numero: ");
		scanf("%d", &a);
		if (a>0) {
			printf("Este numero e positivo\n");
		}
		else {
			printf("Este numero e negativo\n");
		}
		if (a%2==0) {
			printf("Este numero e par\n");
		}
		else {
			printf("Este numero e impar\n");
		}
		printf("Deseja continuar? (s/n): ");
		op = getch();
		printf("\n\n");
	}
	printf("\n\n");
	system("pause");
}


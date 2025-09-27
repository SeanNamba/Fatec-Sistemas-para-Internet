#include<stdio.h>
#include<stdlib.h>
main ()
{
	int ant = 0, atual = 1, prox = 0;
	
	printf("Serie Fibonacci ate o numero 10.000: \n\n");
	while (prox <= 10000) {
		printf("%d\n", prox);
		prox = ant + atual;
		ant = atual;
		atual = prox;
	}
	
	system("pause");
}
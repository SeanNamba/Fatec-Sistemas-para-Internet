#include<stdio.h>
#include<stdlib.h>
main ()
{
	int num, soma_pares = 0, soma_impares = 0;
	printf("Digite numeros inteiros e positivos. O programa para quando digitar um numero maior que 500.\n");
	do {
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num<=500) {
			if (num % 2 == 0) {
				soma_pares +=num;
			}
			else {
				soma_impares += num;
			}
		}
	} while (num<=500);
	printf("Soma dos numeros pares: %d\n", soma_pares);
	printf("Soma dos numeros impares: %d\n", soma_impares);
	return 0;
}
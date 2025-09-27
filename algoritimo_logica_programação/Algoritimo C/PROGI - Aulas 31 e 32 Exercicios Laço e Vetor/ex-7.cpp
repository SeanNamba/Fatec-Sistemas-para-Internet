#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int vetor[5];
	int i, soma = 0;
	float media;
	
	printf("Digite 5 valores inteiros: \n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &vetor[i]);
		soma += vetor[i];
	}
	
	media = soma / 5;
	
	printf("A media dos valores e: %.2f\n", media);
	
	printf("Numeros maiores que a media: \n");
	for (i = 0; i <5; i++) {
		if (vetor[i] > media) {
			printf("%d ", vetor[i]);
		}
	}
	printf("\n");
	
	printf("Numeros menores que a media: \n");
	for (i = 0; i < 5; i++) {
		if (vetor[i] < media) {
			printf("%d ", vetor[i]);
		}
	}
	printf("\n");
	system("pause");
}
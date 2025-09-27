#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int numeros[10];
	int i, soma=0, maior, menor;
	float media;
	
	printf("Digite 10 numeros para o vetor: \n");
	for (i=0; i <10; i++) {
		scanf("%d", &numeros[i]);
		soma = soma + numeros[i];
	}
	
	media = soma / 10;
	
	menor = maior = numeros[0];
	for (i=0; i<10; i++) {
		if (numeros[i] > maior) {
			maior = numeros[i];
		}
		if (numeros[i] < menor) {
			menor = numeros[i];
		}
	}
	
	printf("O maior numero e: %d\n", maior);
	printf("O menor numero e: %d\n", menor);
	printf("A media e: %.2f\n\n", media);
	
	
	system("pause");
}
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	char nome1[20], nome2[20];
	float  alt1, alt2, pes1, pes2;
	printf("Digite o nome da primeira pessoa: ");
	fflush(stdin);
	gets(nome1);
	printf("Sua altura: ");
	scanf("%f", &alt1);
	printf("E seu peso: ");
	scanf("%f", &pes1);
	printf("\n\n");
	
	printf("Digite o nome da segunda pessoa: ");
	fflush(stdin);
	gets(nome2);
	printf("Sua altura: ");
	scanf("%f", &alt2);
	printf("E seu peso: ");
	scanf("%f", &pes2);
	printf("\n\n");
	
	if (alt1>alt2) {
		printf("A pessoa mais alta e a %s\n", nome1);
	}
	else {
		printf("A pessoa mais alta e a %s\n", nome2);
	}
	
	if (pes1>pes2) {
		printf("A pessoa mais pesada e a %s\n", nome1);
	}
	else {
		printf("A pessoa mais pesada e a %s\n", nome2);
	}
	
	
	system("pause");
}
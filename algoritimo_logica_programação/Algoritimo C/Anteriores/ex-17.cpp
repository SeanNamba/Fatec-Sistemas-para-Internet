#include<stdio.h>
#include<stdlib.h>
main ()
{
	int n1, n2, n3, n4, n5, par=0, imp=0, pos=0, neg=0;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&n3);
	printf("Digite o quarto numero: ");
	scanf("%d",&n4);
	printf("Digite o quinto numero: ");
	scanf("%d",&n5);
	if (n1 % 2 == 0) {
		par = par + 1;
	}
	else {
		imp = imp + 1;
	}
	if (n2 % 2 == 0) {
		par = par + 1;
		
	}
	else {
		imp = imp + 1;
	}
	if (n3 % 2 == 0) {
		par = par + 1;
	}
	else {
		imp = imp + 1;
	}
	if (n4 % 2 == 0) {
		par = par + 1;
	}
	else {
		imp = imp + 1;
	}
	if (n5 % 2 == 0) {
		par = par + 1;
	}
	else {
		imp = imp + 1;
	}
	if (n1 > 0) {
		pos = pos + 1;
	}
	else {
		neg = neg + 1;
	}
	if (n2 > 0) {
		pos = pos + 1;
	}
	else {
		neg = neg + 1;
	}
	if (n3 > 0) {
		pos = pos + 1;
	}
	else {
		neg = neg + 1;
	}
	if (n4 > 0) {
		pos = pos + 1;
	}
	else {
		neg = neg + 1;
	}
	if (n5 > 0) {
		pos = pos + 1;
	}
	else {
		neg = neg + 1;
	}
	printf("\nO total de numeros pares e: %d\n", par);
	printf("O total de numeros impares e: %d\n", imp);
	printf("O total de numeros positivos e: %d\n", pos);
	printf("O total de numeros negativos e: %d\n", neg);
}


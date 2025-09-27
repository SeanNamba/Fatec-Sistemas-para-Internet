#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int n1, n2, n3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	if ((n1>=0 && n1<=1) && (n2>=0 && n2<=1) && (n3>=0 && n3<=1)) {
		if (n1==0 && n2==0 && n3==0) {
			printf("ZERO\n\n");
		}
		if (n1==0 && n2==0 && n3==1) {
			printf("UM\n\n");
		}
		if (n1==0 && n2==1 && n3==0) {
			printf("DOIS\n\n");
		}
		if (n1==0 && n2==1 && n3==1) {
			printf("TRES\n\n");
		}
		if (n1==1 && n2==0 && n3==0) {
			printf("QUATRO\n\n");
		}
		if (n1==1 && n2==0 && n3==1) {
			printf("CINCO\n\n");
		}
		if (n1==1 && n2==1 && n3==0) {
			printf("SEIS\n\n");
		}
		if (n1==1 && n2==1 && n3==1) {
			printf("SETE\n\n");
		}
	}
	else {
		printf("Numeros invalidos");
	}
	system("pause");
}
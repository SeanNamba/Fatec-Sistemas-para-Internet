#include<stdio.h>
#include<stdlib.h>
main ()
{
	float n1, n2, soma, sub, mult, div;
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	printf("Soma de %.2f e %.2f = %.2f \n",n1,n2,soma);
	printf("Subtracao de %.2f e %.2f = %.2f \n",n1,n2,sub);
	printf("Multiplicacao de %.2f e %.2f = %.2f \n",n1,n2,mult);
	if (n2 == 0)
		printf("Impossivel dividir por ZERO");
	else
		printf("Divisao de %.2f e %.2f = %.2f \n",n1,n2,div);
}


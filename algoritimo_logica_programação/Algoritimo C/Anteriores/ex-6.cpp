#include<stdio.h>
#include<stdlib.h>
main ()
{
	float n1, n2, a, m;
	printf("Digite o salario do funcionario: ");
	scanf("%f",&n1);
	if (n1 <= 500)
	{
		a = n1 + n1 * 20 / 100;
		printf("O novo salario e de: %.2f", a);
	}
	else
	{
		a = n1 + n1 * 10 / 100;
		printf("O novo salario e de: %.2f", a);
	}

}


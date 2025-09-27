#include<stdio.h>
#include<stdlib.h>
main ()
{
	float n1, n2, s, m;
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	s = n1 + n2;
	m = s / 2;
	printf("A media do aluno e %.1f \n",m);
	if (m >= 6)
		printf("O aluno esta APROVADO");
	else
		printf("O aluno esta REPROVADO");
}


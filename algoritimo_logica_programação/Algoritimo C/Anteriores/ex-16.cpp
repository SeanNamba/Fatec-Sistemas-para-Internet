#include<stdio.h>
#include<stdlib.h>
main ()
{
	float total, brancos, nulos, validos, perc_brancos, perc_nulos, perc_validos;
	printf("Digite o total de eleitores do municipio: ");
	scanf("%f",&total);
	printf("Digite o total de votos brancos do municipio: ");
	scanf("%f",&brancos);
	printf("Digite o total de votos nulos do municipio: ");
	scanf("%f",&nulos);
	printf("Digite o total de votos validos do municipio: ");
	scanf("%f",&validos);
	perc_brancos = brancos / total * 100;
	perc_nulos = nulos / total * 100;
	perc_validos = validos / total * 100;
	printf("A eleicao teve um percentual de %.2f de votos brancos\n", perc_brancos);
	printf("A eleicao teve um percentual de %.2f de votos nulos\n", perc_nulos);
	printf("A eleicao teve um percentual de %.2f de votos validos\n", perc_validos);
}


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int i, totapr=0, totrep=0, totex=0;
	float n1, n2, media, medgeral=0;
	system("color f0");
	
	for (i==0;i<6;i++)
	{
		printf("Digite a 1a. nota: " );
		scanf("%f", &n1);
		printf("Digite a 2a. nota: " );
		scanf("%f", &n2);
		media = (n1+n2) / 2;
		medgeral = medgeral + media;
		
		if (media < 3)
		{
			printf("Media = %.1f - Aluno reprovado!!!\n\n", media);
			totrep++;
		}
		
		if (media >= 3 && media < 7)
		{
			printf("Media = %.1f - Aluno de exame!!!\n\n",media);
			totex++;
		}
		
		if (media >= 7)
		{
			printf("Media = %.1f - Aluno aprovado!!!\n\n",media);
			totapr++;
		}
	}
	
	printf("Total de alunos aprovados = %d\n\n",totapr);
	printf("Total de alunos de exame = %d\n\n",totex);
	printf("Total de alunos reprovados = %d\n\n",totrep);
	printf("Media geral dos alunos = %.1f\n\n",medgeral/6);
	
	getch();
}
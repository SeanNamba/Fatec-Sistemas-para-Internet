#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main ()
{
	int nota1a, nota2a, nota1b, nota2b, nota1c, nota2c, nota1d, nota2d, nota1e, nota2e, nota1f, nota2f, aprovados=0, exame=0, reprovados=0;
	float mediaa, mediab, mediac, mediad, mediae, mediaf, mediaclasse;
	char nome1[20], nome2[20], nome3[20], nome4[20], nome5[20], nome6[20];
	
	printf("Digite o nome do primeiro aluno: ");
	fflush(stdin);
	gets(nome1);
	printf("Sua primeira nota: ");
	scanf("%d", &nota1a);
	printf("Sua segunda nota: ");
	scanf("%d", &nota2a);
	printf("\n\n");
	
	mediaa = (nota1a + nota2a) / 2;
	
	printf("Digite o nome do segundo aluno: ");
	fflush(stdin);
	gets(nome2);
	printf("Sua primeira nota: ");
	scanf("%d", &nota1b);
	printf("Sua segunda nota: ");
	scanf("%d", &nota2b);
	printf("\n\n");
	
	mediab = (nota1b + nota2b) / 2;
	
	printf("Digite o nome do terceiro aluno: ");
	fflush(stdin);
	gets(nome3);
	printf("Sua primeira nota: ");
	scanf("%d", &nota1c);
	printf("Sua segunda nota: ");
	scanf("%d", &nota2c);
	printf("\n\n");
	
	mediac = (nota1c + nota2c) / 2;
	
	printf("Digite o nome do quarto aluno: ");
	fflush(stdin);
	gets(nome4);
	printf("Sua primeira nota: ");
	scanf("%d", &nota1d);
	printf("Sua segunda nota: ");
	scanf("%d", &nota2d);
	printf("\n\n");
	
	mediad = (nota1d + nota2d) / 2;
	
	printf("Digite o nome do quinto aluno: ");
	fflush(stdin);
	gets(nome5);
	printf("Sua primeira nota: ");
	scanf("%d", &nota1e);
	printf("Sua segunda nota: ");
	scanf("%d", &nota2e);
	printf("\n\n");
	
	mediae = (nota1e + nota2e) / 2;
	
	printf("Digite o nome do sexto aluno: ");
	fflush(stdin);
	gets(nome6);
	printf("Sua primeira nota: ");
	scanf("%d", &nota1f);
	printf("Sua segunda nota: ");
	scanf("%d", &nota2f);
	printf("\n\n");
	
	mediaf = (nota1f + nota2f) / 2;
	
	mediaclasse=(mediaa+mediab+mediac+mediad+mediae+mediaf)/6;
	
	if (mediaa<3) {
		reprovados=reprovados+1;
	}
	
	if (mediaa>=3 || mediaa<=6.9) {
		exame=exame+1;
	}
	
	if (mediaa>=7) {
		aprovados=aprovados+1;
	}
	
	if (mediab<3) {
		reprovados=reprovados+1;
	}
	
	if (mediab>=3 || mediab<=6.9) {
		exame=exame+1;
	}
	
	if (mediab>=7) {
		aprovados=aprovados+1;
	}
	
	if (mediac<3) {
		reprovados=reprovados+1;
	}
	
	if (mediac>=3 || mediac<=6.9) {
		exame=exame+1;
	}
	
	if (mediac>=7) {
		aprovados=aprovados+1;
	}
	
	if (mediad<3) {
		reprovados=reprovados+1;
	}
	
	if (mediad>=3 || mediad<=6.9) {
		exame=exame+1;
	}
	
	if (mediad>=7) {
		aprovados=aprovados+1;
	}
	
	if (mediae<3) {
		reprovados=reprovados+1;
	}
	
	if (mediae>=3 || mediae<=6.9) {
		exame=exame+1;
	}
	
	if (mediae>=7) {
		aprovados=aprovados+1;
	}
	
	if (mediaf<3) {
		reprovados=reprovados+1;
	}
	
	if (mediaf>=3 || mediaf<=6.9) {
		exame=exame+1;
	}
	
	if (mediaf>=7) {
		aprovados=aprovados+1;
	}
	
	printf("O numero de alunos aprovados e: %d\n\n", aprovados);
	printf("O numero de alunos em exame e: %d\n\n", exame);
	printf("O numero de alunos reprovados e: %d\n\n", reprovados);
	printf("A media da classe foi: %.2f\n\n", mediaclasse);
	
	
	system("pause");
}
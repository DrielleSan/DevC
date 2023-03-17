//2 – Fazer um programa que receba duas notas N1, N2 
//e o percentual de Frequência de um aluno e verifique a situação do aluno: (Aprovado – Reprovado – Prova Final)

#include <stdio.h>

main ()
{
	float n1,n2,media;
	int perfreq;
	printf("Informe o valor da N1: ");
	scanf("%f",&n1);
	printf("Informe o valor da N2: ");
	scanf("%f",&n2);
	
	printf("Informe a frequencia: \n");
	scanf("%d",&perfreq);
	
	media=(n1+n2)/2;
		
	if((media<=7)&&(percfre>=75)){
		printf("Aluno Aprovado");
	}
	if((media<=4)&&(percfre<75)){
		printf("Aluno Reprovado");
	}
	if((media>4)&&(media<7)&&(percfre<75)){
		printf("Prova Final");
	}
}

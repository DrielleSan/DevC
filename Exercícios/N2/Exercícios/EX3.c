//3 - Fazer um programa em C que crie, preencha e apresente um vetor de 15 posições de reais entre 0 e 10,0.
//Apresente a frente de cada valor a mensagem aprovado para valores acima de 5,9 e reprovado para os demais valores.

#include<stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
	int i;
	float vet[15];
	char sta[9];
	printf("INDICE\tPOS VET\tSTATUS\n");
	srand(time(NULL));
	for(i=0;i<15;i++)
	{ 
		vet[i]=rand()%101; 
		vet[i]=vet[i]/10;// pegou o valor do rand e dividiu por 10 para chegar na casa decimal
		if(vet[i]>5.9){
			sprintf(sta,"Aprovado");
		}
		else{
			sprintf(sta,"Reprovado");
		}
		printf("%d\t[%4.1f]\t%s\n",i,vet[i],sta);
	}
}
	

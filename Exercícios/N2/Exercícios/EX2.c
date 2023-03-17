//2 - Fazer um programa em C que crie, preencha e apresente um vetor de 10 posições de inteiros entre 50 e 150.
//Em seguida calcule e apresente a média dos valores.

#include<stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
	int i,vet[10],ima=0;
	printf("INDICE\tPOS VET\n");
	srand(time(NULL));
	for(i=0;i<10;i++)
	{ 
		vet[i]=(rand()%101)+50; //150-50=100 | PARA O RAND: Adiciona +1 no valor final
		printf("%d\t[%2d]\n",i,vet[i]);
		if(vet[i]>vet[ima])
		{
			ima=i; //como informar o maior valor
		}
	}
	printf("\nO maior elemento eh %d na posicao %d\n",vet[i],vet[ima]);
}
	

//6.Faça um programa que gere aleatoriamente dez números entre 20 e 50 e apresente a soma destes números.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int x=0,soma=0,r;
	srand(time(NULL));
	while(x<=10)
	{	
		r=(rand()%31)+20; //substrai do valor fornecido 50-20=31 e soma com o primeiro valor
		printf("%d\n",r);
		soma=soma+r; //quando se trata de repetição, a conta precisa estar dentro do while ou for
		x++;
	}
	printf("A soma resulta em: %d\n",soma);
}


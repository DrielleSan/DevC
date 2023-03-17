//8.Faça um programa que gere aleatoriamente 5 números entre 0 e 10 e seus respectivos pesos (1, 2 ou 3) ao final calcule sua média ponderada.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int x=0,r,soma=0,peso,ptot;
	float medpon;
	srand(time(NULL));
	printf("Num\tPeso\n");
	while(x<=5)
	{	
		r=rand()%10;
		peso=rand()%3+1;
		printf("%d\t%d\n",r,peso);
		soma=soma+(r*peso);
		ptot=ptot+peso;
		medpon=soma/ptot;
		x++;
	}
	printf("\nA media resulta em: %.1f",medpon);
}

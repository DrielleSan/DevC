//9.Escreva um programa que gere 10 números inteiros entre 0 e 100 e escreva o menor e o maior valor .

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int x=0,r,me=100,ma=0;
	float medpon;
	srand(time(NULL));
	while(x<=10)
	{	
		r=rand()%100;
		printf("%d\n",r);
		
		if(r<=me){
			me=r;
		}
		if(r>=ma){
			ma=r;
		}
		x++;
	}
	printf("\nValor Maior: %d",ma);
	printf("\nValor Menor: %d",me);
}


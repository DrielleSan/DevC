//7.Gere aleatoriamente 30 números entre -10 e 30, em seguida apresente a sua média.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int x=0,soma=0,r,media;
	srand(time(NULL));
	while(x<=5)
	{	
		r=rand()%41+(-10);
		printf("%d\n",r);
		soma=soma+r;
		x++;
	}
	media=soma/2;
	printf("A media resulta em: %d\n",media);
}


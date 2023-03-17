//10.Faça um programa que gere um número inteiro positivo par N menor que 100 e imprima todos os números pares de 0 até N em ordem crescente.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int x=0,r,n=0;
	srand(time(NULL));
	while(x<100)
	{	
		r=rand()%99+1;
		printf("%d\n",r);
		
		if(x%2==0){	
		}
		x++;
		
	}
	printf("%d",x);
}

//10.Fa�a um programa que gere um n�mero inteiro positivo par N menor que 100 e imprima todos os n�meros pares de 0 at� N em ordem crescente.

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

//3.Fazer um programa que apresente quantos n�meros s�o m�ltiplos de 7 entre 100 e 500.

#include<stdio.h>
#include<stdlib.h>

main(){
	int x=100; 
	while(x<=500)
	{	x++;
		if(x%7==0){
			printf("%d\n",x);	
		}
	}
}


//2.Fazer um programa que apresente todos os múltiplos de 4 entre 1 e 100 inclusive.

#include<stdio.h>
#include<stdlib.h>

main(){
	int x=0;  
	while(x<=100)
	{	x++;
		if(x%4==0){
			printf("%d\n",x);	
		}
	}
}


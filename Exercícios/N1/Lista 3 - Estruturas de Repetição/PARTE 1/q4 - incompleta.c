//4.Fazer um programa que receba o intervalo (a, b) e  um n�mero c, apresente quantos s�o os m�ltiplos de c no intervalo.

#include<stdio.h>
#include<stdlib.h>

main(){
	int a,b,c,x;  
	while(x<=500)
	{	x++;
		if(x%c==0){
			printf("%d\n",x);	
		}
	}
}


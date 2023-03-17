//9 – Escreva um programa que leia um número e informe se ele é divisível por 3 e por 7

#include <stdio.h>

main ()
{
	int a,b;
	printf("Informe um valor: \n");
	scanf("%d",&b);
	
	if((a==b%3)&&(a==b%7)&&(a==0)){
		printf("Valor divisivel por 3 e 7");
	}
	else{
		printf("Valor nao divisivel por 3 e 7");
	}
}

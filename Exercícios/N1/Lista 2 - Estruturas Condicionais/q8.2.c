//8 -  Escreva um programa que receba um número e imprima uma das mensagens: “é múltiplo de 3” ou “não é múltiplo de 3”. 
//Sabendo que na expressão (A= B%3) A receberá o resto da divisão de B por 3

#include <stdio.h>

main ()
{
	int a,b;
	printf("Informe um valor: \n");
	scanf("%d",&b);
	
	if((a==b%3)&&(a==0)){
		printf("Valor multiplo de 3");
	}
	else{
		printf("Valor nao multiplo por 3");
	}
}

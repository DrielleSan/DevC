//8 -  Escreva um programa que receba um n�mero e imprima uma das mensagens: �� m�ltiplo de 3� ou �n�o � m�ltiplo de 3�. 
//Sabendo que na express�o (A= B%3) A receber� o resto da divis�o de B por 3

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

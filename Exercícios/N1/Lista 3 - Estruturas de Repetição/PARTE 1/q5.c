//5.Fazer um programa que apresente os N primeiros n�meros da s�rie de Fibonacci (0-1-1-2-3-5�) 

#include<stdio.h>
#include<stdlib.h>

main(){
	int x,y,n1=0,n2=1,soma=0;  
	//n1=valor anterior; n2 = pr�ximo valor; y="vetor" correspondente
	
	printf("Informe um valor para calcular Fibonacci: ");
	scanf("%d",&y);
	
	for(x=0;x<y;x++)
	{
		soma=n2+n1;
		n1=n2;
		n2=soma;
	}
	printf("Fibonacci %d = %d\n",y,n1);
}


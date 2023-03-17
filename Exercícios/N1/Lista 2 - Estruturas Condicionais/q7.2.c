//7-Fazer um programa leia dois números e efetue a sua adição. Caso o valor encontrado seja maior
//que 20, este deverá ser apresentado somando-se a ele mais 8; 
//caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.

#include <stdio.h>

main ()
{
	int n1,n2,soma;
	printf("Informe 2 numeros: \n");
	scanf("%d %d",&n1,&n2);
	soma=n1+n2;
	
	if((soma)<=20){
		soma=soma-5;
		printf("A subtracao sera: %d",soma);
	}
	else
		if((soma)>20){
		soma=soma+8; //Só usamos == para atribuição dentro do if()
		printf("A soma sera: %d",soma);
	}
}

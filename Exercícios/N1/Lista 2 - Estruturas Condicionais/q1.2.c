//1 - Fazer um programa que receba três valores e verifique se estes podem ser os lados de um triângulo


#include <stdio.h>

main ()
{
	int a,b,c;
	printf("Digite 3 valores: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(((a+b)<c)&&((b+c)<a)&&((a+c)<b)){
		printf("Os lados %d %d %d correspondem ao de um triangulo\n",a,b,c);	
	}
	else
		printf("Os lados %d %d %d nao correspondem ao de um triangulo\n",a,b,c);
}

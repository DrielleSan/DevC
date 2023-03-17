//4 – Fazer Um programa que leia três valores verifique se estes 
//podem ser os lados de um triângulo, caso afirmativo, classifique o triângulo quanto ao seu tipo. 

//escaleno todos diferentes
//equilatero todos iguais
//isosceles dois iguais e um diferente

#include <stdio.h>

main ()
{
	int a,b,c;
	printf("Digite 3 valores: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(((a+b)<c)&&((b+c)<a)&&((a+c)<b)){
		printf("Os lados %d %d %d correspondem ao de um triangulo\n",a,b,c);
		if((a==b)&&(b==c))
		printf("Triangelo Equilatero");
		if((a==b)&&(b==c)&&(c!=a))
		printf("Triangulo Isosceles");
		if((a!=b)&&(b!=c)&&(c!=a))
		printf("Triangulo Escaleno");	
	}
	else
		printf("Os lados %d %d %d nao correspondem ao de um triangulo\n",a,b,c);
}

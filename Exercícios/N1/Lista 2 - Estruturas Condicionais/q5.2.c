//5 - Fazer Um programa que receba três valores A, B e C, os apresente em ordem crescente.

#include <stdio.h>

main ()
{
	int a,b,c;
	printf("Digite 3 valores: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if((a<b)&&(a<c)&&(b<c)){
	printf("%d %d %d\n",a,b,c);
	}
	if((a<c)&&(a<b)&&(c<b)){
	printf("%d %d %d\n",a,c,b);
	}
	if((b<a)&&(b<c)&&(a<c)){
	printf("%d %d %d\n",b,a,c);
	}
	if((b<a)&&(b<c)&&(c<a)){
	printf("%d %d %d\n",b,c,a);
	}
	if((c<a)&&(c<b)&&(b<a)){
	printf("%d %d %d\n",c,b,a);
	}
	if((c<b)&&(c<a)&&(a<b)){
	printf("%d %d %d\n",c,a,b);
	}
}

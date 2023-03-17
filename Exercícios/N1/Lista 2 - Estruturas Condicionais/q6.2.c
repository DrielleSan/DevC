//6-Fazer Um programa que receba três valores A, B , C e OP, 
//quando OP=1  apresente em ordem crescente caso contrário os números devem ser apresentados em ordem decrescente.

#include <stdio.h>

main ()
{
	int a,b,c,op;
	printf("Digite 3 valores: \n");
	scanf("%d %d %d",&a,&b,&c);
	printf("Informe OP: \n");
	scanf("%d",&op);
	
	if(op==1){
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
	else{
	if((a>b)&&(a>c)&&(b>c)){
	printf("%d %d %d\n",a,b,c);
	}
	if((a>c)&&(a>b)&&(c>b)){
	printf("%d %d %d\n",a,c,b);
	}
	if((b>a)&&(b>c)&&(a>c)){
	printf("%d %d %d\n",b,a,c);
	}
	if((b>a)&&(b>c)&&(c>a)){
	printf("%d %d %d\n",b,c,a);
	}
	if((c>a)&&(c>b)&&(b>a)){
	printf("%d %d %d\n",c,b,a);
	}
	if((c>b)&&(c>a)&&(a>b)){
	printf("%d %d %d\n",c,a,b);
	}
	}}
}

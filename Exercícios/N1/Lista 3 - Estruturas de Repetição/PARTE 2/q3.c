//3.Dado o exercício 2 faça outro algoritmo que calcule o percentual de operários de cada linha de produção 
//e o percentual de operários que produziram  mais de 300 peças.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	int x=0,prod=0,lp=0,op=0,op300=0;
	float tptpg,totlp1,totlp2,perop1,totop1,totop2,perop2,perop300;
	srand(time(NULL));
	printf("Prod\tLinha Prod\n");
	
	while(x<=50)
	{	
		lp=(rand()%2)+1;
		prod=(rand()%231)+120;
		if(lp=1){
			lp=lp+1;
			totlp1=totlp1+lp;
			op=op+1;
			totop1=totop1+op;
		}
		else{
			if(lp=2)
			lp=lp+1;
			totlp2=totlp2+lp;
			op=op+1;
			totop2=totop2+op;
		}
		if(prod>300){
			op300=op300+1;
			prod=prod+op300;	
		}
		x++;
		printf("%d\t%d\t\n",prod,lp);
	}
	printf("\nA media da linha de producao 1 resulta em: %.2f",totlp1/lp);
	printf("\nA media da linha de producao 2 resulta em: %.2f",totlp2/lp);
	printf("\nA porcetangem de operadores 1 resulta em: %.2f",totop1/op);
	printf("\nA porcetangem de operadores 2 resulta em: %.2f",totop1/op);
	printf("\nA porcentagem dos operarios com producao acima de 300 pecas: %.2f",op300/prod);
}

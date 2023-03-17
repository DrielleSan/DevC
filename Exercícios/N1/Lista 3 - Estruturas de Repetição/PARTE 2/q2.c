//2. Fazer um programa que gere aleatoriamente a produção (120 a 350) 
//e a linha de produção (1 ou 2) de 50 operários a calcule a média de produção geral e de cada linha

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	int x=0,prod=0,lp=0;
	float tptpg,totlp1,totlp2;
	srand(time(NULL));
	printf("Prod\tLinha Prod\n");
	
	while(x<=50)
	{	
		prod=(rand()%231)+120;
		lp=(rand()%2)+1;
		if(lp==1){
			lp=lp+1;
			totlp1=totlp1+lp;
		}
		else{
			if(lp==2)
			lp=lp+1;
			totlp2=totlp2+lp;
		}
		x++;
		printf("%d\t%d\t\n",prod,lp);
	}
	printf("\nA media da linha de producao 1 resulta em: %.1f",totlp1/lp);
	printf("\nA media da linha de producao 2 resulta em: %.1f",totlp2/lp);
}

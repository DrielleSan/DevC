#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
main(){
	int cont=0,sx,idade,es;
	char sexo[10],esporte[12];
	float medIdadeMas,totIdaMas=0,totMas=0,medIdadeFem,totIdaFem=0,totFem=0,perBas,perFut,perVol;
	float medIdadeBas,totIdaBas=0,totBas=0,medIdadeFut,totIdaFut=0,totFut=0,medIdadeVol,totIdaVol=0,totVol=0;
	float perFemBas,totFemBas=0,perMasBas,totMasBas=0,perFemFut,totFemFut=0,perMasFut,totMasFut=0;
	float perFemVol,totFemVol=0,perMasVol,totMasVol=0;
	srand(time(NULL));
	while (cont<75){
		cont++;
		sx=rand()%2;
		es=(rand()%3)+1;
		idade=(rand()%6)+12;
		if(sx==0){
			sprintf(sexo,"Feminino");
			totIdaFem=totIdaFem+idade; 
			totFem=totFem+1;
		}
		else{
			sprintf(sexo,"Masculino");
			totIdaMas=totIdaMas+idade; 
			totMas=totMas+1;
		}
	
		if(es==1){
			sprintf(esporte,"Basquete");
			totIdaBas=totIdaBas+idade; 
			totBas=totBas+1;
			if(sx==0)
				totFemBas++;
			else
				totMasBas++;
		}
		if(es==2){
			sprintf(esporte,"Futebol");
			totIdaFut=totIdaFut+idade; 
			totFut=totFut+1;
			if(sx==0)
				totFemFut++;
			else
				totMasFut++;
		}
		if(es==3){
			sprintf(esporte,"Volei");
			totIdaVol=totIdaVol+idade; 
			totVol=totVol+1;
			if(sx==0)
				totFemVol++;
			else
				totMasVol++;
		}	
			printf("%2d -\t%s\t%d\t%s\n",cont,sexo,idade,esporte);	
	}
	medIdadeMas=totIdaMas/totMas;
	printf("Media de idade Masculina: %.1f\n",medIdadeMas);
	medIdadeFem=totIdaFem/totFem;
	printf("Media de idade Feminina : %.1f\n",medIdadeFem);
	medIdadeBas=totIdaBas/totBas;
	medIdadeFut=totIdaFut/totFut;
	medIdadeVol=totIdaVol/totVol;
	printf("Media de idade Basquete : %.1f\n",medIdadeBas);
	printf("Media de idade Futebol  : %.1f\n",medIdadeFut);
	printf("Media de idade Volei    : %.1f\n",medIdadeVol);
	perBas=totBas/cont*100;
	printf("Percentual Basquete : %.1f\n",perBas);
	perFut=totFut/cont*100;
	printf("Percentual Futebol  : %.1f\n",perFut);
	perVol=totVol/cont*100;
	printf("Percentual Volei    : %.1f\n",perVol);
	perFemBas=totFemBas/totBas*100;
	perMasBas=totMasBas/totBas*100;
	printf("Percentual Feminino no Basquete  : %.1f\n",perFemBas);
	printf("Percentual Masculino no Basquete : %.1f\n",perMasBas);
	perFemFut=totFemFut/totFut*100;
	perMasFut=totMasFut/totFut*100;
	printf("Percentual Feminino no Futebol   : %.1f\n",perFemFut);
	printf("Percentual Masculino no Futebol  : %.1f\n",perMasFut);
	perFemVol=totFemVol/totVol*100;
	perMasVol=totMasVol/totVol*100;
	printf("Percentual Feminino no  Volei    : %.1f\n",perFemVol);
	printf("Percentual Masculino no Volei    : %.1f\n",perMasVol);
	
}

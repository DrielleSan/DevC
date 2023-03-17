#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main() {

	struct notas{ //precisa dar o nome para o "banco de dados" 
		char codigo[10];
		int tp;
		char tipo [20];
		char mes[20];
		int lc;
		char local[20];
		int dias;
		float valor;
				
	};
	printf("COD \tMES \t   TIPO \tLOCAL \t        DIAS \tVALOR \n");
	struct notas nt[113];//precisa colocar o nome do banco para "puxar" a informação. [113] é a quantidade de nt de acordo com o exemplo.
	int i,ntma;
	float tfret,ttrans,medf,tdf,medt,tdt;
	float tot15,tot15ie,pd15;
	float vset,tset,mset,vout,tout,mout,vnov,tnov,mnov;
	
 	for(i=0;i<113;i++){
 		sprintf(nt[i].codigo,"NT%d",i+17001); // COMO IMPRIMIR O CÓDIGO DA FORMA QUE ELE INDICOU 
 		nt[i].tp=rand()%2; // rand do tipo
 		nt[i].lc=rand()%2; //rand do local
 		nt[i].dias=(rand()%30)+1; //cáculo de dias
 		
 		//TIPO - Foi necessário colocar antes devido ao cálculo a ser executado após o laço
 		if(nt[i].tp==0){
 			sprintf(nt[i].tipo,"FRETAMENTO");
 			nt[i].valor=nt[i].dias*300+500;
 			tdf=tdf+nt[i].dias;
 			tfret++;
		}
		if(nt[i].tp==1){
 			sprintf(nt[i].tipo,"TRANSPORTE");
 			nt[i].valor=nt[i].dias*450+750;
 			tdt=tdt+nt[i].dias; //cálculo para executar a quantidade de dias para a média
 			ttrans++;
		}
 		
 		//MÊS - Foi somado os valores para ter a totalidade
 		if(i<=39){
 			sprintf(nt[i].mes,"SETEMBRO   ");
 			vset=vset+nt[i].valor;
 			tset++;
		}
		
 		if((i>39)&&(i<=80)){
 			sprintf(nt[i].mes,"OUTUBRO    "); 
 			vout=vout+nt[i].valor;
 			tout++;
		}
		
 		if(i>80){
 			sprintf(nt[i].mes,"NOVEMBRO   ");
 			vnov=vnov+nt[i].valor;
 			tnov++;
		}
		
		//LOCAL
		if(nt[i].lc==0){
 			sprintf(nt[i].local,"ESTADUAL     ");
		}
		if(nt[i].lc==1){
 			sprintf(nt[i].local,"INTERESTADUAL");
 			if(nt[i].dias>15){
 				tot15ie++;
			 }
		}
		//DIAS - Contador para acumular quantidade de dias ACIMA de 15 dias para ter cálculo exato.
		if(nt[i].dias>15){ 
			tot15++;
		}
		
		//MAIOR VALOR
		if(nt[i].valor>nt[ntma].valor){
			ntma=i;
		}
		printf("%s\t%s%s\t%s\t%d\tR$%8.2f\n",nt[i].codigo,nt[i].mes,nt[i].tipo,nt[i].local,nt[i].dias,nt[i].valor);
	}
	pd15=tot15ie/tot15*100;
	printf("\n2 - O percentual de NT's com duracao maior que 15 dias que eram interestaduais. %2.2f%%\n",pd15);
	
	medf=tdf/tfret;
	medt=tdt/ttrans;
	printf("3 - A media de Dias das NTs - Fretamento. %2.2f\n",medf);
	printf("3 - A media de Dias das NTs - Transporte. %2.2f\n",medt);
	
	printf("4 - A NT de maior valor: %s\t%s\t%s\t%s\t%d\t%9.2f\n\n",nt[ntma].codigo,nt[ntma].mes,nt[ntma].tipo,nt[ntma].local,nt[ntma].dias,nt[ntma].valor);
	
	mset=vset/tset;
	mout=vout/tout;
	mnov=vnov/tnov;
	printf("5 - O valor medio das NTs - Setembro: %.2f\n",mset);
	printf("5 - O valor medio das NTs - Outubro:  %.2f\n",mout);
	printf("5 - O valor medio das NTs - Novembro: %.2f\n",mnov);
}

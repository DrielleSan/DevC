//Questão 6 - Feita pelo Professor

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
main(){
	
	int cont=0,os,at=0,mat=0,nosMat;
	int diasPrev,diasGast,ts;//entradas
	float perManFP,totManFP=0,totMan=0,perRepFP,totRepFP=0,totRep=0;
	float medAtMan,totDManFP=0,medAtRep,totDRepFP=0,perosat,totosat=0;
	char tipoOs[10];
	os=1354;
	srand(time(NULL));
	while(cont<250){
		at=0;
		ts=(rand()%2)+1;
		diasPrev=(rand()%10)+1;
		diasGast=(rand()%15)+1;
		if(diasPrev<diasGast){
			at=diasGast-diasPrev;
			if (at>mat){
				mat=at;
				nosMat=os;
			}
		}
		if(diasPrev>diasGast){
			totosat++;
		}
			
		if(ts==1){
			sprintf(tipoOs,"Manutencao");
			totMan++;
			if (at>0){
				totManFP++;
				totDManFP=totDManFP+at;
			}	
		}
		else{
			sprintf(tipoOs,"Reparo    ");
			totRep++;
			if (at>0){
				totRepFP++;
				totDRepFP+=at;
			}
		}
		
		printf("%d\t%s\t%d\t%d\t%d\tMaior%d os %d\n",os,tipoOs,diasPrev,diasGast,at,mat,nosMat);
		cont++;
		os++;
	}
	perManFP=totManFP/totMan*100;
	perRepFP=totRepFP/totRep*100;
	printf("=============================================\n");
	printf("Percentual de Manutenl??o fora do Prazo; %.1f%%\n",perManFP);
	printf("Percentual de Reparo      fora do Prazo; %.1f%%\n",perRepFP);
	printf("=============================================\n");
	printf("A OS de maior atraso foi a de numero %d com %d dias\n",nosMat,mat);
	medAtMan=totDManFP/totManFP;
	medAtRep=totDRepFP/totRepFP;
	printf("=============================================\n");
	printf("Media de dias de Manutencao fora do Prazo; %.1f\n",medAtMan);
	printf("Media de dias de Reparo     fora do Prazo; %.1f\n",medAtRep);
	perosat=totosat/cont*100;
	printf("Percentual de OS entrgue antes do Prazo; %.1f%%\n",perosat);
	//osMaiAt
}




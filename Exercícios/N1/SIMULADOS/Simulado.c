#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

main(){
	int x=101,us=0,nc,ts,qh,vl,nb=0,nm=0,na=0,nat100;
	float tcal,tusi,tmac,permac,tsan,persan,talt=0,palt100;
	float mqhc,thc=0,mqhu,thu=0;
	char uniser[10],complex[5],tips[20];
	
	printf("COD\tUNIDADE\tCOMPLEX\tTIPO SER\tQT HORA\tVALOR\n");
	while(x<=250){
		us=(rand()%2)+1;
		nc=(rand()%3)+1;
		ts=(rand()%2)+1;
		qh=(rand()%153)+8;
		vl=1200+(200*nc)*qh;//parte 2 - num 2
		srand(time(NULL));
		
		//unidade de serviço
		if(us==1){
			sprintf(uniser,"MACAE");
			tmac++;
		}
		if(us==2){
			sprintf(uniser,"SANTOS");
			tsan++;
		}
		
		//Nível de Complexidade
		if(nc==1){
			sprintf(complex,"BAIXA");
		}
		if(nc==2){
			sprintf(complex,"MEDIA");
		}
		if(nc==3){
			sprintf(complex,"ALTA");
				if(qh>100){
				nat100++;		
		}
			talt++;	
		}
		
		//TIPO DE SERVIÇO
		if(ts==1){
			sprintf(tips,"CALDEIRARIA");
			thc+=qh;
			tcal++;
		}
		if(ts==2){
			sprintf(tips,"USINAGEM  ");
			thu+=qh;
			tusi++;
		}
		printf("%d\t%s\t%s\t%s\t%d\tR$%.2d\n",x,uniser,complex,tips,qh,vl);
		x++;
		vl++;
	}
	printf("\n================PARTE 2 - NUM 3================\n\n");
	permac=tmac/x*100;
	printf("Percentual de Servico - MACAE: %.1f%%\n",permac);
	persan=tsan/x*100;
	printf("Percentual de Servico - SANTOS: %.1f%%\n",persan);
	
	printf("\n================PARTE 3 - NUM 4================\n\n");
	palt100=nat100/talt*100;
	printf("Percentual de Servico - Alta Complexidade maior que 100h : %.2f%%\n\n",palt100);
	mqhc=thc/tcal;
	printf("A media de horas para os servicos - Caldeiraria: %.1fh\n",mqhc);
	mqhu=thu/tusi;
	printf("A media de horas para os servicos - Usinagem: %.1fh\n",mqhu);
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main() {
	struct empresa{
		int m;
		char cod[10];
		int tp;
		char tipo[10];
		int lc;
		char local[10];
		int uni;
		float val;
		
   	};
    
	struct empresa eq[154];
	int i,serma,serme;
	float toff=0,peroff,ton=0,peron,totalo=0,malo,meda;
	float vmtes=0,totes=0,vmedes;
	
	printf("CODIGO\t  TIPO\t       LOCAL\t QTD  MES   VALOR\n");
	
	for(i=0;i<154;i++){
		sprintf(eq[i].cod,"SRV%d",i+2022);
		
		eq[i].tp=rand()%3;
		eq[i].lc=rand()%2;
		eq[i].uni=(rand()%5)+1;
		eq[i].m=(rand()%32)+1;
				
		//TIPO DE CONTAINER
		if(eq[i].tp==0){
			sprintf(eq[i].tipo,"ALOGAMENTO");
			eq[i].val=eq[i].uni*eq[i].m*550;
			malo=malo+eq[i].m;
			totalo++;
		}
		if(eq[i].tp==1){
			sprintf(eq[i].tipo,"COZINHA   ");
			eq[i].val=eq[i].uni*eq[i].m*500;
		}
		if(eq[i].tp==2){
			sprintf(eq[i].tipo,"ESCRITORIO");
			eq[i].val=eq[i].uni*eq[i].m*450;
			vmtes=vmtes+eq[i].val;
			totes++;
		}
		
		//LOCAL
		if(eq[i].lc==0){
			sprintf(eq[i].local,"OFFSHORE");
			eq[i].val=eq[i].val+0,2;
			toff++;
		}
		if(eq[i].lc==1){
			sprintf(eq[i].local,"ONSHORE ");
			ton++;
		}
	printf("%s | %s | %s | %d | %.2d | R$ %8.2f\n",eq[i].cod,eq[i].tipo,eq[i].local,eq[i].uni,eq[i].m,eq[i].val);
	
		//MAIOR E MENOR
		if(eq[i].val>eq[serma].val){
			serma=i;
		}
		if(eq[i].val<eq[serme].val){
			serme=i;
		}
	}
	
	printf("\n=========== QUESTAO 2 ============\n");
	peron=ton/i*100;
	peroff=toff/i*100;
	printf("Percentual de notas - Onshore : %.2f%%\n",peron);
	printf("Percentual de notas - Offshore: %.2f%%\n",peroff);
	
	printf("\n=========== QUESTAO 3 ============\n");
	meda=malo/totalo;
	printf("A media de meses dos servicos - Alogamento: %.2f\n",meda);
	
	printf("\n=========== QUESTAO 4 ============\n");
	printf("Servico de maior valor: %s | %s | %s | %d | %.2d | R$ %8.2f\n",eq[serma].cod,eq[serma].tipo,eq[serma].local,eq[serma].uni,eq[serma].m,eq[serma].val);
	printf("Servico de menor valor: %s | %s | %s | %d | %.2d | R$ %8.2f\n",eq[serme].cod,eq[serme].tipo,eq[serme].local,eq[serme].uni,eq[serme].m,eq[serme].val);
	
	printf("\n=========== QUESTAO 5 ============\n");
	vmedes=vmtes/totes;
	printf("O valor medio dos alugueis - Escritorio: %2.2f\n",vmedes);
}

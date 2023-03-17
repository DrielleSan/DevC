//Aluno: Drielle Santos Monteiro
//N1 - PROG I - SERGIO NETTO

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

main(){
	
	int x=0,ni=1001,ori,es,nc=0,ma,me;
	int pont,mepont,mapont;
	float mpont,tpub=0,ppub,tpar=0,ppar,cbac=0,pbas,cint=0,pint,cava=0,pava,tjpub=0,pepub;
	char origem[10],esco[11],ncon[20];
	
	printf("INS\tORIGEM\t\tESCOLARIDADE\tPONTUACAO\tCONHECIMENTO\n");
	while(x<=120){
		ori=(rand()%2)+1;//ORIGEM
		es=(rand()%2)+1;//ESCOLARIDADE
		pont=(rand()%100);//PONTUAÇÃO
		nc=(rand()%61)+40;//NIVEL DE CONHECIMENTO
				
		//ORIGEM
			if(ori==1){
			sprintf(origem,"PUBLICA  ");
			tpub++;
			tjpub=+tjpub;
		
		}
			if(ori==2){
			sprintf(origem,"PARTICULAR");
			tpar++;
		}
		
		//ESCOLARIDADE
			if(es==1){
			sprintf(esco,"FUNDAMENTAL");
		}
			if(es==2){
			sprintf(esco,"MEDIO   ");
		}
		
		//NÍVEL DE CONHECIMENTO
			if(nc<=39){
			sprintf(ncon,"SEM CLASSIFICACAO");
		}
			if((nc>39)&&(nc<=60)){
			sprintf(ncon,"BASICO");
			cbac++;
		}
			if((nc>60)&&(nc<=80)){
			sprintf(ncon,"INTERMEDIARIO");
			cint++;
		}
			if((nc>80)&&(nc<=100)){
			sprintf(ncon,"AVANCADO");
			cava++;
		}
		if(pont>0){
			mapont=ma;
			ma=pont;
		}
		if(pont<=100){
			mepont=me;
			me=pont;
		}
	printf("%d\t%s\t%s\t%d\t\t%s\n",ni,origem,esco,pont,ncon);
	x++;
	ni++;
	}
	printf("\n============= PARTE 2 ==================\n");
	//A media de pontuacao obtida por todos os candidatos
	mpont=pont/x;
	printf("A media de pontuacao foi de: %.1f\n",mpont);
	
	//O percentual de jovens oriundos de escolas publicas e privadas
	ppar=(tpar/120)*100;
	printf("\nPercentual de jovens - Escola Particular: %.2f%%\n",ppar);
	ppub=(tpub/120)*100;
	printf("Percentual de jovens - Escola Publica:    %.2f%%\n",ppub);
	
	//O percentual de jovens por nivel de conhecimento
	pbas=(cbac/120)*100;
	printf("\nPercentual de jovens - Nivel Basico:        %.2f%%\n",pbas);
	pint=(cint/120)*100;
	printf("Percentual de jovens - Nivel Intermediario: %.2f%%\n",pint);
	pava=(cava/120)*100;
	printf("Percentual de jovens - Nivel Avancado:      %.2f%%\n",pava);
	
	//O percentual de jovens de ensino médio - escolas publicas
	pepub=(tjpub*tpub)/100;
	printf("\nPercentual de jovens somente escola Publica:       %2.0f\n",tpub);
	
	//A maior e a menor pontuação obtida com os respectivos números de inscrição
	printf("\nA maior pontuacao foi %d com o num de inscricao %d",ma,ni);
	printf("\nA menor pontuacao foi %d com o num de inscricao %d",me,ni);
	
	printf("\n\n=========FIM DO ALGORITMO=================");
}

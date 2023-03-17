#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>

main(){
	
	struct notas {
		char codigo[10];
		int tp;
		char mes[10];
		int dias;
		char tipo[12];
		float valor;
		char local[12];
		int lc;
	};
	
	struct notas nt[113];
	int i,ntmaior=0;
	float perm15ie,totm15ie=0,totm15=0,mdfret,tdfret=0,tfret=0,vmout,vtotout=0,totout=0;
	printf("C?digo 	M?s		Tipo 		Local	  	Dias	 Valor\n");
	printf("=========================================================================\n");
	for (i=0;i<113;i++){
		sprintf(nt[i].codigo,"NT%d",i+30038);
		nt[i].tp=rand()%2;
		nt[i].lc=rand()%2;
		nt[i].dias=(rand()%30)+1;
		if(nt[i].tp==0){
			sprintf(nt[i].tipo,"Fretamento");
			nt[i].valor = nt[i].dias * 300 + 500 ;
			tdfret=tdfret+nt[i].dias;
			tfret++;

		}
		if(nt[i].tp==1){
			sprintf(nt[i].tipo,"Transporte");
			nt[i].valor =nt[i].dias * 450 + 750 ;
		}
		if(i<39){
			sprintf(nt[i].mes,"Setembro");
		}
		if((i>38)&&(i<80)){
			sprintf(nt[i].mes,"Outubro ");
			vtotout=vtotout+nt[i].valor;
			totout++;
		}
		if(i>79){
			sprintf(nt[i].mes,"Novembro");
		}
		
		if(nt[i].lc==0){
			sprintf(nt[i].local,"Estadual     ");
		}
		if(nt[i].lc==1){
			sprintf(nt[i].local,"Interestadual");
			if(nt[i].dias>15){
				totm15ie++;
			}
		}
		printf("%s\t%s\t%s\t%s\t%d\t%9.2f\n",nt[i].codigo,nt[i].mes,nt[i].tipo,nt[i].local,nt[i].dias,nt[i].valor);
		if(nt[i].dias>15){
			totm15++;
		}
		if(nt[i].valor>nt[ntmaior].valor)
			ntmaior=i;
	
	}
	printf("=========================================================================\n");	
	perm15ie=totm15ie/totm15*100;
	printf("%f\t%f",totm15ie,totm15);
	printf("O percentual de NT's com dura??o maior que 15 dias que eram interestaduais %.1f%%\n",perm15ie);
	printf("=========================================================================\n");
	mdfret=tdfret/tfret;
	printf("A m?dia de Dias das NT's de Fretamento %.1f\n",mdfret);
	printf("=========================================================================\n");
	printf("Nota de maior Valor\n");
	printf("%s\t%s\t%s\t%s\t%d\t%9.2f\n",nt[ntmaior].codigo,nt[ntmaior].mes,nt[ntmaior].tipo,nt[ntmaior].local,nt[ntmaior].dias,nt[ntmaior].valor);
	printf("=========================================================================\n");
	vmout=vtotout/totout;
	printf("O Valor m?dios das NT?s do m?s de outubro %.2f\n",vmout);
	printf("=========================================================================\n");
}

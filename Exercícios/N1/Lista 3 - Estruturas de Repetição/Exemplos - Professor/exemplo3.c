#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int cont=0,sx,es,ta;
	char sexo[10],tipoes[12],origem[15];
	float perepen,tepen=0,tep=0;
	while(cont<10){
		sx=rand()%2;
		ta=rand()%3;
		es=rand()%2;
		if(sx==0){
			sprintf(sexo,"feminino");
		}
		if(sx==1){
			sprintf(sexo,"masculino");		
		}
	
		if(es==0){
			sprintf(tipoes,"Publica");
			tep++;
			if(ta==1){
				tepen++;
			}
		}
		if(es==1){
			sprintf(tipoes,"Privada");		
		}
		
		if(ta==0){
			sprintf(origem,"Vestibular");
		}
		if(ta==1){
			sprintf(origem,"Enem");		
		}
		if(ta==2){
			sprintf(origem,"Transferencia");		
		}
	cont++;
	printf("%d - %s\t%s\t%s\n",cont,sexo,tipoes,origem);
		
	}
	perepen=tepen/tep*100;
	printf("Percentual de egressos da EP que utilizaram nota do ENEM %.1f%% \n",perepen);
}

//6.Uma empresa de manutenção de equipamentos deseja fazer um estudo em relação um conjunto de 250 Ordens de Serviço executadas, para isso ofereceu um arquivo contendo:
//o Número da OS(1354- 1603) OK
//a quantidade de dias previstos par a entrega, OK
//a quantidade de dias gastos e o tipo do serviço (1 – Manutenção ou 2 – Reparo). OK
//Faça um programa que gere aleatoriamente as informações e calcule: 
//O percentual de ordens de serviço de cada tipo entregue fora do prazo e o número da OS com maior atraso.

//7.Dado o exercício 6 calcule:
//a média de dias de atraso para as OS’s de cada tipo quando houver;
//percentual de OS’s independente do tipo entregues antes do prazo. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

main(){
	int x=0,os,at=0,mat=0,numosmat=0;//declaração de variáveis
	int dprev,dgas,ts;//valores de entrada
	float tman=0,tmanfp=0,pmanfp,trep=0,trepfp=0,prepfp;
	float tosat=0,tDrepfp=0,medatrepfp,tDmanfp=0,medatmanfp,posap;
	char tips[12]; 
	os=1354;
	srand(time(NULL));
	printf("NUM\tTIPOSER \tPREV\tGASTO\tATRASO\tMAIOR ATRASO\n");
	
	while(x<250){
		ts=(rand()%2)+1;
		dprev=(rand()%10)+1;//qtde de dias espitulado pelo dev
		dgas=(rand()%15)+1;
		
		//referente ao atraso de acordo com os dias gastos e previstos
		if(dprev<dgas){
			at=dgas-dprev;
			if(at>mat){
				mat=at;
				numosmat=os;
			}
		}
		if(dprev>dgas){
			tosat++;
		}
		//referente ao tipo de serviço e o incremento de cada um
		if(ts==1){
			sprintf(tips,"Manutencao");
			tman++;//o mesmo que escrever totman=totman+1
			if(at>0){ //if referente ao tipo de serviço e entregue fora do prazo
				tmanfp++;
				tDmanfp+=at;
			}
		}
		else{
			sprintf(tips,"Reparo    ");
			trep++;
			if(at>0){ //if referente ao tipo de serviço e entregue fora do prazo
				trepfp++;
				tDrepfp+=at;
			}
		}
			printf("%d\t%s\t%d\t%d\t%d\t\n",os,tips,dprev,dgas,at);
		x++;
		os++;
	}
	pmanfp=tmanfp/tman*100;
	printf("\nManutencao fora do prazo: %.1f%%\n",pmanfp);
	prepfp=trepfp/trep*100;
	printf("Reparo fora do prazo:     %.1f%%\n",prepfp);
	
	printf("\nA Os %d com maior atraso de %d dias\n",numosmat,mat);
	

	printf("\n======= Complemento - Questao 7 =========\n");
	medatmanfp=tDmanfp/tmanfp;
	printf("\nMedia de dias - Servico Manutencao: %.1f\n",medatmanfp);
	medatrepfp=tDrepfp/trepfp;
	printf("Media de dias - Servico Reparo:     %.1f\n",medatrepfp);
	posap=tosat/x*100;
	printf("OS entregue antes do prazo: %.1f%%",posap);
}

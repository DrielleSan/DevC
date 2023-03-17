//Pré Simulado - 2022.2

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	int x=0,cod=1001,tc,lk,reg,m1,m2,m3,totcon=0;
	float tred=0,tcred=0,tcom=0,tccom=0,tcru=0,tru=0,medred,medcom,medru;
	float tsana=0,tcsana=0,medsana,tfra=0,tcfra=0,medfra,tcgli=0,tgli=0,medgli;
	int totmacon,codtotmacon,pl60,tot60,pl150,tot150,pl300,tot300;
	char tipc[20],regiao[10],link[6];
	srand(time(NULL));
	printf("COD\tTIPO CLIENTE\tLINK\tREGIAO\t  MES1\tMES2\tMES3\tTOTAL\n");
	
	while(x<=105){
		tc=(rand()%3)+1;
		lk=(rand()%3);
		reg=(rand()%3)+1;
		m1=(rand()%16)+5;
		m2=(rand()%16)+5;
		m3=(rand()%16)+5;
		totcon=m1+m2+m3;
		
		//TIPO DE CLIENTE
		if(tc==1){
			sprintf(tipc,"Residencial");
			tcred+=totcon;
			tred++;
		}
		if(tc==2){
			sprintf(tipc,"Comercial  ");
			tccom+=totcon;
			tcom++;
		}
		if(tc==3){
			sprintf(tipc,"Rural	");
			tcru+=totcon;
			tru++;
		}
		
		//LINK
		if(lk==0){
			sprintf(link,"60mb ");
			tot60++;
		}
		if(lk==1){
			sprintf(link,"150mb");
			tot150++;
		}
		if(lk==2){
			sprintf(link,"300mb");
			tot300++;
		}
		
		//REGIÃO
		if(reg==1){
			sprintf(regiao,"Sana    ");
			tcsana+=totcon;
			tsana++;
		} 
		if(reg==2){
			sprintf(regiao,"Frade   ");
			tcfra+=totcon;
			tfra++;
		}
		if(reg==3){
			sprintf(regiao,"Glicerio");
			tcgli+=totcon;
			tgli++;
		}
		if(totcon>totmacon){ 
				totmacon=totcon;
				codtotmacon=cod;
			}
		printf("%d\t%s\t%s\t%s  %d\t%dgb\t%dgb\t%dgb\n",cod,tipc,link,regiao,m1,m2,m3,totcon);
		x++;
		cod++;
	}
	
	//2- A média de consumo mensal dos clientes pesquisados. 
	medred=tcred/tred;
	printf("\nMedia de consumo mensal - Residencial: %.1f\n",medred);
	medcom=tccom/tcom;
	printf("Media de consumo mensal - Comercial:   %.1f\n",medcom);
	medru=tcru/tru;
	printf("Media de consumo mensal - Rural:       %.1f\n",medru);
	
	printf("\n==================PARTE 2==================\n");
	//*3 -  A média de consumo pelos clientes de cada Região.
	medsana=tcsana/tsana;
	printf("\nMedia de consumo - Sana:     %.1f\n",medred);
	medfra=tcfra/tfra;
	printf("Media de consumo - Frade:    %.1f\n",medfra);
	medgli=tcgli/tgli;
	printf("Media de consumo - Glicerio: %.1f\n",medgli);
	
	//4 - O percentual de cliente por Link
	pl60=tot60/x*100;
	printf("\nPercentual Cliente - Link 60mb:  %.1f%%\n",pl60);
	pl150=tot150/x*100;
	printf("Percentual Cliente - Link 150mb: %.1f%%\n",pl150);
	pl300=tot300/x*100;
	printf("Percentual Cliente - Link 300mb: %.1f%%\n",pl300);
	
	//5 -. O Código do cliente com maior consumo total no período
	printf("\nCliente com maior consumo total: %d",codtotmacon);
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	int x=0,ni=1000,ori,es,pont;
	char origem[10],esco[15],nivel[30];
	float tpont,mpont,tpub,tpart,ppub,ppart;
	float tbas,tint,tava,pbas,pint,pava;
	float tmed,tmedpub,pmedpub;
	srand(time(NULL));
	printf("INS\tORIGEM\t\tESCOLARIDADE\tPONTUACAO\tCONHECIMENTO\n");
	while(x<=120){
		ori=(rand()%2)+1;//ORIGEM
		es=(rand()%2)+1;//ESCOLARIDADE
		pont=rand()%100;//PONTUAÇÃO - rand de 0 a 100 - erro 1 da prova
		tpont=tpont+pont;
	
		//CONDIÇÃO ORIGEM	
		if(ori==1){ 
		sprintf(origem,"PUBLICA   ");
		tpub++;
		}
		if(ori==2){
		sprintf(origem,"PARTICULAR");
		tpart++;
		}
	
		//CONDIÇÃO ESCOLARIDADE
		if(es==1){ 
		sprintf(esco,"FUNDAMENTAL");
		}
		if(es==2){
		sprintf(esco,"MEDIO    ");
		tmed++;
			if(ori==1){
				tmedpub++;
			}
		}
		
		//CONDIÇÃO PONTUAÇÃO - segundo erro da prova - não aproveitei a condição para apresentar os níveis. 
		if(pont<40){
			sprintf(nivel,"NAO APLICAVEL   ");
		}
		if((pont>=40)&&(pont<=60)){
			sprintf(nivel,"BASICO          ");
			tbas++;
		}
		if((pont>60)&&(pont<=80)){
			sprintf(nivel,"INTERMEDIARIO   ");
			tint++;
		}
		if((pont>80)&&(pont<=100)){
			sprintf(nivel,"AVANCADO        ");
			tava++;
		}
		
		printf("%d\t%s\t%s\t%d\t\t%s\n",ni,origem,esco,pont,nivel);
		x++;
		ni++;
	}
	
	printf("\n2. Media da pontuacao obtida por todos os candidatos;\n");
	mpont=tpont/x;
	printf("A media de pontuacao foi: %.2f\n",mpont);
	
	printf("\n3. O percentual de jovens oriundos de escolas publicas e privadas\n");
	ppub=tpub/x*100;
	printf("Percentual de alunos - Escola Publica:    %.2f%%\n",ppub);
	ppart=tpart/x*100;
	printf("Percentual de alunos - Escola Particular: %.2f%%\n",ppart);
	
	printf("\n4. O percentual de Jovens por nivel de conhecimento\n");
	pbas=tbas/x*100;
	printf("Percentual de alunos - Conhecimento Basico:         %.2f%%\n",pbas);
	pint=tint/x*100;
	printf("Percentual de alunos - Conhecimento Intermediario:  %.2f%%\n",pint);
	pava=tava/x*100;
	printf("Percentual de alunos - Conhecimento Avancado:       %.2f%%\n",pava);

	pmedpub=tmedpub/tmed*100;
	printf("\n5. Percentual de jovens do ensino medio que vem de escolas publicas: %.2f%%\n",pmedpub);

	
	
}

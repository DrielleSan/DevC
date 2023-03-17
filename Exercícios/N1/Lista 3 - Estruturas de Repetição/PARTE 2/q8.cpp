//8.Um hospital está fazendo um estudo referente um conjunto de 100 pacientes atendidos em sua emergência, 
//para isso faça um programa que gere aleatoriamente:
//o tipo de atendimento(0– Clinica Geral ou 1 – Ortopedia) e e origem (0 – Particular ou 1 – Plano de Saúde) e a idade dos pacientes(0- 90). 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	int x=0,aten=0,ori=0,id=0,id60;
	float tatend=0,tort=0,tcg=0,tidpart=0,tpart=0,tplan=0,tidplan=0;
	float pcg,port,medpart,medplan,pcg60;
	char tipoat[50],origem[30];
	srand(time(NULL));
	printf("Atendimento\tOrigem\t        Idade\n");
	
	while(x<=100)
	{	
		aten=rand()%2;
		ori=rand()%2;
		id=rand()%90;
		if(aten==0){
			sprintf(tipoat,"Clinica Geral");
			tcg++;
			if(id>60){
				id++;
				tcg+=id60;
			}
		}
		else{
			sprintf(tipoat,"Ortopedia");
			tort++;
		}
		if(ori==0){
			sprintf(origem,"Particular");
			tidpart+=id;
			tpart++;	
		}
		else{
			sprintf(origem,"Plano de Saude");
			tidplan+=id;
			tplan++;
		}
		printf("%s\t%s\t%d\n",tipoat,origem,id);
		x++;
		tatend++;
		id++;
	}
	//o percentual de atendimentos de cada tipo
	pcg=tcg/tatend*100;
	printf("\nTotal de atendimento - Clinica Geral: %.1f%%\n",pcg);
	port=tort/tatend*100;
	printf("Total de atendimento - Ortopedia:     %.1f%%\n",port);
	
	//a média de idade dos pacientes de cada origem
	medpart=tidpart/tpart;
	printf("\nMedia de idade - Origem Particular:     %.1f%%\n",medpart);
	medplan=tidplan/tplan;
	printf("Media de idade - Origem PLano de Saude: %.1f%%\n",medplan);
	
	//percentual de pacientes da Clínica geral com idade superior a 60 anos.  
	pcg60=id60/tcg*100;
	printf("\nPacientes - Clinica Geral superior a 60 anos: %.1f%%\n",pcg60);
}

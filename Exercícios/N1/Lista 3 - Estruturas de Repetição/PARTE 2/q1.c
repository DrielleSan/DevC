//1. Fazer um programa que gere aleatoriamente 
//que leia a idade(17 a 45) e o sexo (1 - M ou 2 -F) de 20 indivíduos e calcule a média de idade de cada grupo.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	int x=0,r=0,id=0,gn=0;
	float totidfem,totidmas;
	char genero[5];
	srand(time(NULL));
	printf("Idade\tGenero\n");
	
	while(x<=20)
	{	
		id=(rand()%29)+17;
		gn=(rand()%2)+1;
		if(gn==1){
			sprintf(genero,"Mas");
			id=id+1;
			totidmas=totidmas+id;
		}
		if(gn==2){
			sprintf(genero,"Fem");
			id=id+1;
			totidfem=totidfem+id;
		}
		x++;
		printf("%d\t%s\n",id,genero);
	}
	printf("\nA media de idade feminina resulta em: %.1f",totidfem/id);
	printf("\nA media de idade masculina resulta em: %.1f",totidmas/id);
}

//4.Faça um programa que gere aleatoriamente:
//o sexo(0 - F ou 1 - M ) a idade (12 a 17)e o esporte preferido (1 – Basquete, 2 – Futebol ou 3 – Vôlei) de um grupo de 75 jovens.
//*Calcule: 
//*a média de idade dos jovens que preferem cada esporte 
//*média das idades dos meninos e das meninas. 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	int x=0,gen,id,esp;
	char tgen[5],efav[12];
	srand(time(NULL));
	printf("Genero\tIdade\tEsporte Favorito\n");
	
	while(x<75)
	{	
		gen=rand()%2;
		id=(rand()%6)+12;
		esp=(rand()%3)+1;
		if(gen==0){
			sprintf(tgen,"Fem");
		}
		else{
			sprintf(tgen,"Mas");
		}
		if(esp==1){
			sprintf(efav,"Basquete");
		}
		if(esp==2){
			sprintf(efav,"Futebol");
		}
		if(esp==3){
			sprintf(efav,"Volei");
		}
	}
	x++;
	printf("%s\t\%d\tn",tgen,id);

}


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	int x=0,r=0,id=0,gn;
	float totid,totidfem,totidmas;
	char genero[15];
	srand(time(NULL));
	printf("Idade\tGenero\n");
	
	while(x<=20)
	{	
		id=rand()%29+17;
		gn=rand()%2+1;
		if(gn=2){
			sprintf(genero,"Fem");
			totid=totid+1;
			totidmas=totidmas+1;
		}
		x++;
		printf("%d\t%s\t%s\n",id,genero);
	}
	printf("\nA media de idade masculina resulta em: %.2f",totidmas/id);
}

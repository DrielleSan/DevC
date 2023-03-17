#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int cont=0,ale,ts;
	char tipos[12],nos[8]; 

	ale=(rand()%201)+500;
	
	while(cont<127){
		ts=rand()%2;
		if(ts==0){
			sprintf(tipos,"Manutencao");
			sprintf(nos,"Man%d",cont+ale);
		}
		else{
			sprintf(tipos,"Reparo");
			sprintf(nos,"Rep%d",cont+ale);
		}
		printf("%s\t%s\n",nos,tipos);
		cont++;
	}
}

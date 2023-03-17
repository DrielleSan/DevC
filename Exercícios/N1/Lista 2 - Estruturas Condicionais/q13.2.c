//13 -  A confederação brasileira de natação fará o cadastro de atletas por categoria. 
//Fazer um programa que receba a idade de um nadador e apresente a sua categoria segundo as seguintes faixas: 
//Infantil A 5 – 7 anos
//Infantil B 8 – 10 anos
//Juvenil A 11 – 13 anos 
//Juvenil B 14 – 17 anos

#include <stdio.h>

main (){
	
	int id;
	
	printf("Informe a idade: ");
	scanf("%d",&id);
	
	if((id>=5)&&(id<8)){
		printf("Infantil A");}
	if((id>=8)&&(id<11)){
		printf("Infantil B");
	}
	if((id>=11)&&(id<14)){
		printf("Juvenil A");
	}
	if((id>=14)&&(id<18)){
		printf("Juvenil B");
	}
}

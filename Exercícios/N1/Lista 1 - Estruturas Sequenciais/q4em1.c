//3� Fazer um programa que apresente seu nome o ano que voc� nasceu e sua idade em 2020

//4 -Fazer um programa que apresente seu nome o ano que voc� nasceu e sua idade em 2020
//Os valores para o ano de nascimento, ano atual e idade devem ser atribu�dos a vari�veis

//5 - Fazer um programa que apresente seu nome o ano que voc� nasceu e sua idade em 2020
//Os valores para o ano de nascimento e ano atual devem ser atribu�dos a vari�veis, a idade deve ser calculada.

//6 � Fazer um programa que pe�a seu nome e ano de nascimento, calcule e apresente a sua idade no ano de 2021.

#include <stdio.h>

int main ()
{
	char nome [20];
	int id,anoat=2022,anonas=1994;
	id=anoat-anonas;
	
	printf("Informe seu nome: ");
	gets (nome);
	printf("Me chamo %s, nasci em %d e hoje, em %d, tenho %d anos! (:",nome,anonas,anoat,id);
}

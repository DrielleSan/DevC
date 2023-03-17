//7 -Fazer um programa que peça seu nome, ano de nascimento, seu peso e altura. Calcule e apresente a sua idade e IMC.

#include <stdio.h>

int main ()
{
	char nome [20];
	int id,anoat=2022,anonas=1994;
	float imc, peso, alt;
	id=anoat-anonas;
	imc=peso/(alt*alt);
	
	printf("Informe seu nome: ");
	gets (nome); //utilizado somente quando há variável do tipo "char"
	printf("Agora sua altura: ");
	scanf("%f",&alt);
	printf("Seu peso: ");
	scanf("%f",&peso);
	printf("Me chamo %s, nasci em %d e hoje, em %d, tenho %d anos! (:\nTenho %.1f kg e %.2f m com IMC de %.2f",nome,anonas,anoat,id,peso,alt,imc);

}

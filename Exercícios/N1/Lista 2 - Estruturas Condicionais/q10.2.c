//10 - A prefeitura de Contagem abriu uma linha de cr�dito para seus funcion�rios. O valor m�ximo
//da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. 
//Fazer um programa que permita entrar sal�rio bruto e o valor da presta��o, e informar se o empr�stimo pode ou n�o ser concedido.

#include <stdio.h>

main ()
{
	float salbru,valprest,cred;
	printf("Informe o salario bruto: R$ ");
	scanf("%f",&salbru);
	printf("Informe o valor da prestacao: R$ ");
	scanf("%f",&valprest);

	cred=salbru*0.3;
	printf("Parcela permitida ate R$ %.2f\n",cred);

	if(valprest<=cred){
		printf("Credito Disponivel");
	}
	else{
		printf("Credito indisponivel");
	}
}

//10 - A prefeitura de Contagem abriu uma linha de crédito para seus funcionários. O valor máximo
//da prestação não poderá ultrapassar 30% do salário bruto. 
//Fazer um programa que permita entrar salário bruto e o valor da prestação, e informar se o empréstimo pode ou não ser concedido.

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

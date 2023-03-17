//12 - A CEF concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldo médio no último ano. 
//Fazer um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. 
//Imprimir uma mensagem informando o saldo médio e o valor de crédito.  
//De 0 a 500 - Nenhum crédito
//De 501 a 1000 - 30% do valor do saldo médio 
//De 1001 a 3000 - 40% do valor do saldo médio
//Acima de 3001 - 50% do valor do saldo médio

#include <stdio.h>

main ()
{
	float salmed;
	printf("Informe um saldo: ");
	scanf("%f",&salmed);
	
	if((salmed>=0)&&(salmed<=500)){
		printf("Nenhum crédito");
	}
	if((salmed>=501)&&(salmed<=1000)){
		salmed=salmed*0.3;
		printf("Credito disponivel: %.2f",salmed);
	}
	if((salmed>=1001)&&(salmed<=3000)){
		salmed=salmed*0.4;
		printf("Credito disponivel: %.2f",salmed);
	}
	if((salmed>3001)){
		salmed=salmed*0.5;
		printf("Credito disponivel: %.2f",salmed);
	}
}

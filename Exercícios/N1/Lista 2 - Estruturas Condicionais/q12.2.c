//12 - A CEF conceder� um cr�dito especial com juros de 2% aos seus clientes de acordo com o saldo m�dio no �ltimo ano. 
//Fazer um programa que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela a seguir. 
//Imprimir uma mensagem informando o saldo m�dio e o valor de cr�dito.  
//De 0 a 500 - Nenhum cr�dito
//De 501 a 1000 - 30% do valor do saldo m�dio 
//De 1001 a 3000 - 40% do valor do saldo m�dio
//Acima de 3001 - 50% do valor do saldo m�dio

#include <stdio.h>

main ()
{
	float salmed;
	printf("Informe um saldo: ");
	scanf("%f",&salmed);
	
	if((salmed>=0)&&(salmed<=500)){
		printf("Nenhum cr�dito");
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

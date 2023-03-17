//3-Fazer um programa que receba o peso e a altura de uma pessoa e calcule o seu IMC Índice de Massa Corporal.  
//IMC=peso/(altura X altura) Verifique se o indivíduo está no peso ideal. IMC>=18.5 e IMC<25

#include <stdio.h>

main ()
{
	float peso,alt,imc;
	
	printf("Informe sua altura: ");
	scanf("%f",&alt);
	printf("Agora seu peso: ");
	scanf("%f",&peso);
	imc=peso/(alt*alt);

	if((imc>=18.5)&&(imc<25)){
		printf("Esta no peso ideal",imc);
	}
	else{
		printf("Nao esta no peso ideal",imc);
	}
}

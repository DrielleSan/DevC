//11 – Faça um programa para calcular o IMC de um indivíduo após a leitura de seu peso e altura. 
//Em seguida classifique-o pela tabela : IMC abaixo de 18,5 Abaixo do peso 
//IMC de 18,5 até 24,9 Peso Normal, 
//IMC de 25 até 29,9 Sobre Peso 
//IMC de 30 até 34,9 Obesidade Grau 1, 
//IMC de 35 ate 39,9 Obesidade Grau 2, 
//A partir 40 Obesidade Mórbida

#include <stdio.h>

main ()
{
	float peso,alt,imc;
	
	printf("Informe sua altura: ");
	scanf("%f",&alt);
	printf("Agora seu peso: ");
	scanf("%f",&peso);
	imc=peso/(alt*alt);

	if((imc<18.5)){
		printf("Abaixo do peso",imc);
	}
	if((imc>18.5)&&(imc<=24.9)){
		printf("Peso Normal",imc);
	}
	if((imc>25)&&(imc<=29.9)){
		printf("Sobre Peso",imc);
	}
	if((imc>30)&&(imc<=34.9)){
		printf("Obesidade Grau 1",imc);
	}
	if((imc>35)&&(imc<=39.9)){
		printf("Obesidade Grau 2",imc);
	}
	if((imc>=40)){
		printf("Obesidade Mórbida",imc);
	}
}

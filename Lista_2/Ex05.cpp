/*
	Author: Lívia Nicole
	Date: 17/03/24 22:55
	Description: 5.	Faça um programa para receber um número e verificar se está entre 100 e 500.
	Se estiver dentro do intervalo, imprimir: "Dentro do intervalo de 100 e 500.
	 Senão estiver no intervalo, deverá imprimir: "Fora do intervalo". 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num = 0;
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if(num >= 100 && num <= 500)
		printf("Dentro do intervalo de 100 e 500");
	else
		printf("Fora do intervalo");
	return 0;
}

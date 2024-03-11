/*
	Ex03
	Author: Lívia Nicole
	Date: 05/03/24 15:56
	Description: 4.Faça um programa calcule o resto da divisão e imprima o resultado na tela.  
*/
#include <stdio.h>
#include <stdlib.h>
int main (){
	int divisor, dividendo, resto;
	printf("Digite um numero diferente de 0: ");
	scanf("%d",&divisor);
	printf("Digite outro numero: ");
	scanf("%d",&dividendo);
	
	resto = dividendo % divisor;
	printf("O resto da divisão e: %d",resto);
	return 0 ;
	
}

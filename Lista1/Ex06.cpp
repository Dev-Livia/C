/*
	Name: Lívia Nicole
	Date: 06/06/24 19:59
	Description: 6.	Faça um programa que indica se o valor digitado é par ou ímpar
*/
#include <stdio.h>
int main(){
	int numero;
	printf("Digite um numero para ver se ele e impar ou par: ");
	scanf("%d",&numero);
	
	if(numero % 2 == 0){
		printf("O numero digitado é PAR");
	}else
		printf("O numero digitado é IMPAR");
	return 0;
}


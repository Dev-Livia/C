/*
	Name: L�via Nicole
	Date: 06/06/24 19:59
	Description: 6.	Fa�a um programa que indica se o valor digitado � par ou �mpar
*/
#include <stdio.h>
int main(){
	int numero;
	printf("Digite um numero para ver se ele e impar ou par: ");
	scanf("%d",&numero);
	
	if(numero % 2 == 0){
		printf("O numero digitado � PAR");
	}else
		printf("O numero digitado � IMPAR");
	return 0;
}


/*
	Name: Lívia Nicole
	Date: 24/06/24 14:51
	Description: 8.	Faça um programa que recebe dois números e indica qual é o maior, se forem iguais, exibe "números iguais". 
*/
#include <stdio.h>
int main(){
	int num1, num2;
	printf("Digite um numero: ");
	scanf("%d",&num1);
	
	printf("Digite mais um numero: ");
	scanf("%d",&num2);
	
	if(num1 > num2){
		printf("O numero %d eh MAIOR",num1);
	}else if(num2 > num1){
		printf("O numero %d eh MAIOR",num2);
	}else
		printf("Os numeros sao iguais.");
	return 0;
}

/*
	Name: L�via Nicole
	Date: 24/06/24 14:51
	Description: 8.	Fa�a um programa que recebe dois n�meros e indica qual � o maior, se forem iguais, exibe "n�meros iguais". 
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

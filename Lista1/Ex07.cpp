/*
	Name: L�via Nicole
	Date: 24/06/24 14:45
	Description: 7.	Fa�a um programa que recebe dois n�meros e indica qual � o maior.  
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
	}else
		printf("O numero %d eh MAIOR",num2);
	
	return 0;
	
}


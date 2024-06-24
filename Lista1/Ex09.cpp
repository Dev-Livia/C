/*
	Name: Lívia Nicole
	Date: 24/06/24 14:56
	Description: 9.	Faça um programa que recebe três números e indica qual é o maior. 
*/
#include <stdio.h>
int main(){
	int num1, num2, num3;
	printf("Digite um numero: ");
	scanf("%d",&num1);
	
	printf("Digite mais um numero: ");
	scanf("%d",&num2);
	
	printf("Digite o ultimo numero: ");
	scanf("%d",&num3);
		
	if(num1 > num2 && num1 > num3){
		printf("\nO maior numero e %d",num1);
	}else if(num2 > num1 && num2 > num3){
		printf("\nO maior numero e %d",num2);
	}else if(num3 > num1 && num3 > num2){
		printf("\nO maior numero e %d",num3);
	}
		
	return 0;
}

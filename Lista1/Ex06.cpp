/*
	Name: Lívia Nicole
	Date: 24/06/24 14:39
	Description: 6.	Faça um programa que indica se o valor digitado é par ou ímpar.  
*/
#include <stdio.h>
int main(){
	int num;
	printf("Digite um numero para ver se ele eh impar ou par: ");
	scanf("%d",&num);
	if(num % 2 == 0){
		printf("O numero %d eh PAR",num);
	}
	else
		printf("O numero %d eh IMPAR");	
	return 0;
}

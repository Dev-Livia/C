/* 
	Ex07
	Author: Lívia 
	Date: 06/03/24 04:08
	Description:  7.Faça um programa que recebe dois números e indica qual é o maior.  
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1,num2;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
if(num1 > num2)
	printf("O numero %d e maior que o numero %d",num1,num2);
	else
		printf("O numero %d e maior que o numero %d",num2,num1);
	return 0;		
}


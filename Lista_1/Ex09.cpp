/*
	Ex08 
	Author:Lívia Nicole  
	Date: 06/03/24 04:24
	Description: 9.	Faça um programa que recebe três números e indica qual é o maior. 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1,num2,num3;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&num3);
if (num1 > num2 && num1 > num3)
    printf("O numero %d e o maior numero entre %d e %d\n", num1, num2, num3);
	else if (num2 > num1 && num2 > num3)
        printf("O numero %d e o maior numero entre %d e %d\n", num2, num1, num3);
    else if (num3 > num1 && num3 > num2)
        printf("O numero %d e o maior numero entre %d e %d\n", num3, num1, num2);
    else if (num1 == num2 && num1 == num3)
        printf("Todos os numeros sao iguais\n");

    return 0;
}


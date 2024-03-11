/*
	Ex09
	Author: Lívia Nicole
	Date: 06/03/24 04:50
	Description: 8.	Faça um programa que recebe dois números e indica qual é o maior, se forem iguais, exibe "números iguais". 
 
*/
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d ", &num1, &num2);

    if (num1 > num2 )
        printf("O numero %d e o maior.\n", num1);
    else if (num2 > num1 )
        printf("O numero %d e o maior.\n", num2);
    else
    	printf("Numeros iguais");
}

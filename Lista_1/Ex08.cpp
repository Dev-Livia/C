/*
	Ex09
	Author: L�via Nicole
	Date: 06/03/24 04:50
	Description: 8.	Fa�a um programa que recebe dois n�meros e indica qual � o maior, se forem iguais, exibe "n�meros iguais". 
 
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

/*
	Ex06
	Author: L�via Nicole 
	Date: 06/03/24 03:56
	Description: 6.	Fa�a um programa que indica se o valor digitado � par ou �mpar.  
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Digite um numero para ver se ele e impar ou par: ");
	scanf("%d",&num);
if (num % 2 == 0)
        printf("O numero %d e PAR\n", num);
    else
        printf("O numero %d e IMPAR\n", num);

    return 0;
}


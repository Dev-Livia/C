/*
	Ex03
	Author: L�via Nicole
	Date: 05/03/24 15:56
	Description: 3.	Fa�a um programa que calcule a m�dia de dois n�meros. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1, num2, media;
	printf("Digite o Primeiro Numero: ");
	scanf("%f",&num1);
	printf("Digite o Primeiro Numero: ");
	scanf("%f",&num2);
	
	media = (num1 + num2) / 2;
	
	printf("A m�dia dos n�meros digitados e: %.2f",media);
	return 0; 
}

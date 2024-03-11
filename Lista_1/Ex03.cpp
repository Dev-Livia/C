/*
	Ex03
	Author: Lívia Nicole
	Date: 05/03/24 15:56
	Description: 3.	Faça um programa que calcule a média de dois números. 
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
	
	printf("A média dos números digitados e: %.2f",media);
	return 0; 
}

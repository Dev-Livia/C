/*
	Name:Lívia Nicole
	Date: 24/06/24 14:11
	Description: 3.	Faça um programa que calcule a média de dois números. 
*/
#include <stdio.h>
int main(){
	int num1, num2, media;
	printf("Digite dois numeros: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	media = (num1 + num2)/2;
	printf("A media do aluno e %d",media);
	return 0;
}

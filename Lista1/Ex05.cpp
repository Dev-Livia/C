/*
	Name: Lívia Nicole 
	Date: 06/06/24 19:50
	Description: 5.	Faça um programa que teste os operadores lógico AND(&&) e OR(||). 
*/
#include <stdio.h>
int main(){
	int r1, r2;
	printf("Digite 1 para Verdadeiro e 0 para falso:\n");
	
	printf("Voce quer ir a festa ? ");
	scanf("%d",&r1);
	
	printf("Voce possui 18 anos ? ");
	scanf("%d",&r2);
	
	if(r1 == 1 && r2 == 1){
		printf("Aproveite a festa !");
	}else
		printf("Parece que voce nao pode ir para a festa . ");
}


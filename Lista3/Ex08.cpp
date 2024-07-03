/*
	Name: Lívia Nicole
	Date: 03/07/24 14:53
	Description: RESOLVA OS EXERCÍCIOS USANDO SOMENTE O LAÇO WHILE. 
	
	8.	Faça um programa que leia 15 números inteiros via teclado. O programa deverá: 

	a.	Imprimir para cada verificação se o valor lido é par ou ímpar. 
	b.	Informar quantos valores lidos são pares; 
	c.	Informar quantos valores lidos são ímpares; 
	d.	Informar se maior quantidade de valores lidos é par ou ímpar

*/
#include<stdio.h>
int main(){
	int contador = 1, contador_Par = 0, contador_Impar = 0, user_num = 0;
	while(contador <= 15){
		printf("\ndigite o %d numero: ",contador);
		scanf("%d",&user_num);
		contador ++;
		if(user_num % 2 == 0){
			printf("O numero digitado e Par\n");
			contador_Par ++;
		}else{
			printf("O numero digitado e Impar\n");
			contador_Impar++;
		}
	}
	if(contador_Par > contador_Impar){
		printf("A maior quantidade de numeros digitados e PAR\n");
	}else{
		printf("A maior quantidade de numeros digitados e IMPAR\n");
	}
	printf("O total de numeros Pares e:  %d\n",contador_Par);
	printf("O total de numeros impares e: %d\n",contador_Impar);
	return 0;
}

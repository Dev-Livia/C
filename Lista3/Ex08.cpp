/*
	Name: L�via Nicole
	Date: 03/07/24 14:53
	Description: RESOLVA OS EXERC�CIOS USANDO SOMENTE O LA�O WHILE. 
	
	8.	Fa�a um programa que leia 15 n�meros inteiros via teclado. O programa dever�: 

	a.	Imprimir para cada verifica��o se o valor lido � par ou �mpar. 
	b.	Informar quantos valores lidos s�o pares; 
	c.	Informar quantos valores lidos s�o �mpares; 
	d.	Informar se maior quantidade de valores lidos � par ou �mpar

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

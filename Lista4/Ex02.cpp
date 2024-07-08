/*
	Name: Lívia 
	Date: 08/07/24 19:59
	Description: 2.	Faça um programa que escreva os valores de 1 até 10 em ordem inversa na tela. 
	RESOLVA OS EXERCÍCIOS USANDO SOMENTE O LAÇO DE REPETIÇÃO: DO WHILE.  
*/
#include <stdio.h>
int main(){
	int contador = 10;
	do{
		printf("%d\n",contador);
		contador --;
	}while(contador >= 0);
	return 0;
}

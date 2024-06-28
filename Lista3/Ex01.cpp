/*
	Name: Lívia Nicole 
	Date: 28/06/24 19:50
	Description: RESOLVA OS EXERCÍCIOS USANDO SOMENTE O LAÇO WHILE. 
 
	1.	Faça um programa para escrever seu nome 10 vezes na tela. 

*/
#include <stdio.h>
int main(){
	int contador = 10;
	while(contador > 0){
		printf("%d: Livia Nicole\n",contador);
		contador--;
	}
	return 0;
}


/*
	Name: L�via 
	Date: 08/07/24 19:59
	Description: 2.	Fa�a um programa que escreva os valores de 1 at� 10 em ordem inversa na tela. 
	RESOLVA OS EXERC�CIOS USANDO SOMENTE O LA�O DE REPETI��O: DO WHILE.  
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

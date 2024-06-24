/*
	Name: Lívia Nicole
	Date: 24/06/24 14:19
	Description: 4.	Faça um programa calcule o resto da divisão e imprima o resultado na tela.  
*/
#include <stdio.h>
int main(){
	int num,div;
	printf("Digite um numero para ver o resto de sua divisao: ");
	scanf("%d",&num);
	div = num % 2;
	printf("O resto do numero %d eh %d",num,div);
	return 0; 
}

/*
	Name: Lívia Nicole
	Date: 04/06/24 23:54
	Description: 4.	Faça um programa calcule o resto da divisão e imprima o resultado na tela.  
*/
#include <stdio.h>
int main(){
	int num,num2, div;
	printf("Digite um numero: ");
	scanf("%d %d",&num, &num2);
	
	div = num % num2;
	
	printf("O resto da divisão é %d", num);
	return 0;
	
}

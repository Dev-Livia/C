/*
	Name: L�via Nicole
	Date: 04/06/24 23:54
	Description: 4.	Fa�a um programa calcule o resto da divis�o e imprima o resultado na tela.  
*/
#include <stdio.h>
int main(){
	int num,num2, div;
	printf("Digite um numero: ");
	scanf("%d %d",&num, &num2);
	
	div = num % num2;
	
	printf("O resto da divis�o � %d", num);
	return 0;
	
}

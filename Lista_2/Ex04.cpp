/*
	Author: Lívia Nicole
	Date: 17/03/24 22:41
	Description: 4.	Faça um programa que recebe três números e mostra qual menor,
	 caso sejam iguais, o programa deve dizer que são iguais. Imprima o resultado na tela. 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2,n3;
	printf("Digite um numero: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1 < n2 && n1 < n3 )
		printf("O menor numero e %d",n1);
	if(n2 < n1 && n2 < n3)
		printf("O menor numero e %d",n2);
	if(n3 < n1 && n3 <n2)
		printf("O menor numero e %d",n3);
	if(n1 == n2 && n1 == n3)
		printf("Os numeros %d, %d, %d sao iguais",n1,n2,n3);
	return 0;
}


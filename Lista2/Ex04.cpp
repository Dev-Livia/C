/*
	Name: L�via Nicole
	Date: 24/06/24 19:34
	Description: 4.	Fa�a um programa que recebe tr�s n�meros e mostra qual menor,
	caso sejam iguais, o programa deve dizer que s�o iguais.
	Imprima o resultado na tela. 
*/
#include <stdio.h>
int main(){
	int n1, n2,n3;
	printf("Digite tres numeros: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1 < n2 && n1 < n3 ){
		printf("O menor numero eh %d",n1);
	}else if(n2 < n1 && n2 < n3 ){
		printf("O menor numero eh %d",n2);
	}else if(n3 < n1 && n3 < n2 ){
		printf("O menor numero eh %d",n3);
	}
	else
		printf("todos os numeros sao IGUAIS.");
	
	
	return 0;
}

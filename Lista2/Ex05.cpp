/*
	Name: livia Nicole
	Date: 24/06/24 19:50
	Description: 5.	Fa�a um programa para receber um n�mero e verificar se est� entre 100 e 500.
	 Se estiver dentro do intervalo,
	 imprimir: "Dentro do intervalo de 100 e 500. Sen�o estiver no intervalo, dever� imprimir: "Fora do intervalo". 
*/
#include <stdio.h>
int main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	if(numero > 100 && numero < 500){
		printf("O Numero %d esta dentro do intervalo de 100 e 500",numero);
	}
	else
		printf("Fora de intervalo");
	return 0;
}

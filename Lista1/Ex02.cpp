/*
	Name: Lívia Nicole
	Date: 27/05/24 10:04
	Description: . Faça um programa que declare 4 variáveis do tipo int, em que cada uma
		dessas variáveis deve possuir o mesmo nome, mas alterando o nome
		entre maiúsculas e minúsculas (ideia é verificar que a linguagem é case
		sensitive). Depois imprima essas variáveis na tela.

*/
#include <stdio.h>
int main(){
	int Num, num, num1, nuM;
	Num = 1;
	num = 2;
	num1 = 3;
	nuM = 4;
	
	printf("%d,%d,%d,%d",Num, num, num1, nuM);
	
	return 0; 
}

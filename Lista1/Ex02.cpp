/*
	Name: Lívia Nicole
	Date: 24/06/24 13:42
	Description: 2.	Faça um programa que declare 4 variáveis do tipo int, em que cada uma dessas variáveis deve possuir o mesmo nome,
	 mas alterando o nome entre maiúsculas e minúsculas (ideia é verificar que a linguagem é case sensitive).
	 Depois imprima essas variáveis na tela. 
*/
#include <stdio.h>
int main(){
	int num, Num, nuM, NUM;
	num = 1;
	Num = 2;
	nuM = 3;
	NUM = 4;
	
	printf("%d, %d, %d, %d",num,Num,nuM,NUM);
}

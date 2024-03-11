/*
	Ex02
	Author: Lívia Nicole
	Date: 05/03/24 15:47
	Description: 2.	Faça um programa que declare 4 variáveis do tipo int, em que cada uma dessas variáveis deve possuir o mesmo nome,
	 mas alterando o nome entre maiúsculas e minúsculas (ideia é verificar que a linguagem é case sensitive).
	 Depois imprima essas variáveis na tela. 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int Num,num,nUm,nuM;
	Num = 4;
	num = 8;
	nUm = 7;
	nuM = 6;
	
	printf("%d\n", Num);
	printf("%d\n", num);
	printf("%d\n", nUm);
	printf("%d\n", nuM);
	return 0 ;
}

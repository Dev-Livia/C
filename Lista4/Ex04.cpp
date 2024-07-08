/*
	Name: Lívia Nicole
	Date: 08/07/24 20:14
	Description: 4.	Faça um programa que mostra os números pares entre 18 e 347 em ordem decrescente. 
*/
#include <stdio.h>
int main(){
	int contador = 347;
	do{
		if(contador % 2 == 0){
		printf("%d\n",contador);
	}
	contador --;
	}while(contador >= 18);
	return 0;
}

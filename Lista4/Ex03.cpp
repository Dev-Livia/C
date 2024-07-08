/*
	Name: Lívia Nicole
	Date: 08/07/24 20:05
	Description: 3.	Faça um programa que mostra os números ímpares entre 18 e 347 em ordem crescente. 
*/
#include <stdio.h>
int main(){
	int contador = 18;
	do{
		if(contador % 2 != 0){
			printf("%d\n",contador);
		}
		contador ++;
	}while(contador <= 348);
	
	return 0;
}

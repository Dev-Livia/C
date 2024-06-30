/*
	Name: Lívia Nicole
	Date: 28/06/24 20:20
	Description: RESOLVA OS EXERCÍCIOS USANDO SOMENTE O LAÇO WHILE.
	4.	Faça um programa que mostra os números pares entre 18 e 347 em ordem decrescente. 
*/
#include <stdio.h>
int main(){
	int contador = 18 ;
	while( contador < 348 ){
		contador++ ;
		if(contador % 2 == 0){
		printf("%d\n",contador);
		}
	}
	return 0;
}

/*
	Name: Lívia Nicole 
	Date: 03/07/24 13:38
	Description:
	6.	Fazer um programa para exibir os números múltiplos de 11 entre 1 e 100 em ordem crescente.  
*/
#include<stdio.h>
int main(){
	int num;
	int inicio = 100, fim = 1;
	num = fim;
	
	while(num % 11 != 0){
		num++;
	}
	
	while(num <= inicio){
		printf("%d\n",num);
		num += 11;
	}
	return 0;
}

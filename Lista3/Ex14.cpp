/*
	Name: L�via Nicole
	Date: 05/07/24 16:00
	Description: 14.	Fa�a um programa que solicita que o usu�rio digite 10 valores.
	 Ao final dos valores digitados o programa dever� mostrar na tela qual foi o menor valor digitado. 
*/
#include <stdio.h>
int main(){
	int user_num, cont = 0, valor_min;
	while(cont < 11){
	printf("Digite o %d� numero: ",cont);
	scanf("%d",&user_num);
	if(user_num < valor_min){
		valor_min = user_num;
	}
	cont ++;
   }
   printf("\nO maior numero eh %d",valor_min);
return 0;
}

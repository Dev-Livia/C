/*
	Name: L�via Nicole
	Date: 05/07/24 15:33
	Description: 13.Fa�a um programa que solicita que o usu�rio digite 10 valores.
	 Ao final dos valores digitados o programa dever� mostrar na tela qual foi o maior valor digitado. 
*/
#include <stdio.h>
int main(){
	int user_num, cont = 0, valor_max = 0;
	while(cont < 11){
	printf("Digite o %d� numero: ",cont);
	scanf("%d",&user_num);
	if(user_num > valor_max){
		valor_max = user_num;
	}
	cont ++;
   }
   printf("\nO maior numero eh %d",valor_max);
return 0;
}

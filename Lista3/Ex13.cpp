/*
	Name: Lívia Nicole
	Date: 05/07/24 15:33
	Description: 13.Faça um programa que solicita que o usuário digite 10 valores.
	 Ao final dos valores digitados o programa deverá mostrar na tela qual foi o maior valor digitado. 
*/
#include <stdio.h>
int main(){
	int user_num, cont = 0, valor_max = 0;
	while(cont < 11){
	printf("Digite o %dº numero: ",cont);
	scanf("%d",&user_num);
	if(user_num > valor_max){
		valor_max = user_num;
	}
	cont ++;
   }
   printf("\nO maior numero eh %d",valor_max);
return 0;
}

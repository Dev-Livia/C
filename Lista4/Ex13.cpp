/*
	Name: Lívia Nicole
	Date: 11/07/24 19:50
	Description: 13.Faça um programa que solicita que o usuário digite 10 valores.
	 Ao final dos valores digitados o programa deverá mostrar na tela qual foi o maior valor digitado. 
*/
#include <stdio.h>
int main(){
	int user_Num = 0, contador = 1, maior_Num = 0;
	do{
		printf("Digite o %d valor: ",contador);
		scanf("%d",&user_Num);
		if(user_Num > maior_Num){
			maior_Num = user_Num;
		}contador++;
	}while(contador <= 10);
printf("O maior numero digitado eh: %d\n",maior_Num);
	return 0;
}

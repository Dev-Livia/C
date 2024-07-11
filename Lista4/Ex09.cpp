/*
	Name: Lívia Nicole 
	Date: 11/07/24 17:06
	Description: RESOLVA OS EXERCÍCIOS USANDO SOMENTE O LAÇO DE REPETIÇÃO: DO WHILE. 
	9.	Faça um programa que solicita que o usuário digite valores positivos (>0) na tela até que o usuário digite um valor negativo.
	 Ao final o programa deverá imprimir a soma dos valores digitados. 
*/
#include <stdio.h>
int main(){
	int user_num , total = 0;
	do{
		printf("Digite um numero: ");
		scanf("%d",&user_num);
		if(user_num > 0){
			total = user_num + user_num;
		}else{
			break;
		}
	}while(true);
	printf("Total de todos os numeros digitados: %d",total);
	
	return 0;
}

/*
	Name: L�via Nicole 
	Date: 11/07/24 17:06
	Description: RESOLVA OS EXERC�CIOS USANDO SOMENTE O LA�O DE REPETI��O: DO WHILE. 
	9.	Fa�a um programa que solicita que o usu�rio digite valores positivos (>0) na tela at� que o usu�rio digite um valor negativo.
	 Ao final o programa dever� imprimir a soma dos valores digitados. 
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

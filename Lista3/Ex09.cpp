/*
	Name: L�via Nicole
	Date: 03/07/24 15:26
	Description: 9.	Fa�a um programa que solicita que o usu�rio digite valores positivos (>0) na tela at� que o usu�rio digite um valor negativo.
	 Ao final o programa dever� imprimir a soma dos valores digitados. 
*/
#include <stdio.h>
int main(){
	int user_num = 0 , soma_num = 0;
	while(true){
	printf("Digite um numero: ");
	scanf("%d",&user_num);
	
 if(user_num > 0){
		soma_num += user_num;
	}else{
		printf("A soma dos valores eh: %d",soma_num);
		break;
	}
   }
   return 0;
}

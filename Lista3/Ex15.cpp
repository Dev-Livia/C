/*
	Name: L�via Nicole
	Date: 05/07/24 16:08
	Description: 15.Fa�a um programa que solicita que o usu�rio digite 10 valores.
	 Ao final dos valores digitados o programa dever� mostrar na tela qual foi o menor valor digitado e qual maior valor digitado. 
*/
#include <stdio.h>
int main(){
	int user_num, num_max, num_min, cont = 1;
		
	while(cont < 11){
		printf("Digite o %d� numero: ",cont);
		scanf("%d",&user_num);
		if(user_num > num_max){
			num_max = user_num;
		}else if(num_min < user_num ){
			num_min = user_num;
		}	
		cont++;
	}
	printf("O maior numero e: %d\n",num_max);
	printf("O menor numero e %d",num_min);
	return 0;
}

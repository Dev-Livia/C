/*
	Name: Lívia Nicole  
	Date: 05/07/24 15:19
	Description: 11.
	Faça um programa que calcula a tabuada de um número (1 ao 10).
	 Exemplo: é solicitado ao usuário que digite um valor, por exemplo 6, o valor retornado é a tabuada do número 6 (1 ao 10). 
     Digite um valor: 6 
*/
#include <stdio.h>
int main(){
	int user_num, cont = 0;
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%d",&user_num);
	while(cont < 11){
		printf("%d x %d = %d\n",user_num,cont,(user_num * cont));
		cont ++;	
	}
	return 0;
}

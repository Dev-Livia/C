/*
	Name: L�via Nicole  
	Date: 05/07/24 15:19
	Description: 11.
	Fa�a um programa que calcula a tabuada de um n�mero (1 ao 10).
	 Exemplo: � solicitado ao usu�rio que digite um valor, por exemplo 6, o valor retornado � a tabuada do n�mero 6 (1 ao 10). 
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

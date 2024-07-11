/*
	Name: Lívia Nicole
	Date: 11/07/24 17:20
	Description: 11.	Faça um programa que calcula a tabuada de um número (1 ao 10). Exemplo: é solicitado ao usuário que digite um valor, por exemplo 6,
	 o valor retornado é a tabuada do número 6 (1 ao 10). 
Digite um valor: 6 
6 x 1 = 6 
6 x 2 = 12 
6 x 3 = 18 
6 x 4 = 24 
6 x 5 = 30 
6 x 6 = 36 
6 x 7 = 42 
 Usando Somente o Laço DO WHILE
*/
#include <stdio.h>
int main(){
	int user_Num = 0, contador = 0;
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%d",&user_Num);
	do{
		printf("%d X %d = %d\n",contador,user_Num,(contador * user_Num));
		contador++;
	}while(contador <= 10);
	return 0;
}

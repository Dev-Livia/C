/*
	Name: L�via Nicole
	Date: 24/06/24 14:39
	Description: 6.	Fa�a um programa que indica se o valor digitado � par ou �mpar.  
*/
#include <stdio.h>
int main(){
	int num;
	printf("Digite um numero para ver se ele eh impar ou par: ");
	scanf("%d",&num);
	if(num % 2 == 0){
		printf("O numero %d eh PAR",num);
	}
	else
		printf("O numero %d eh IMPAR");	
	return 0;
}

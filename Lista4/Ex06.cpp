/*
	Name: Lívia Nicole
	Date: 08/07/24 20:52
	Description: 6.	Fazer um programa para exibir os números múltiplos de 11 entre 1 e 100 em ordem decrescente. 
*/
#include <stdio.h>
int main(){
	int cont = 100;
	printf("Divisiveis por 11:\n");
	do{
		if(cont % 11 == 0){
			printf("%d, ",cont);
		}
		cont --;
	}while(cont >= 1);
	return 0;
}

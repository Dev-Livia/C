/*
	Name: L�via Nicole
	Date: 30/06/24 12:49
	Description: RESOLVA OS EXERC�CIOS USANDO SOMENTE O LA�O WHILE. 
		3.	Fa�a um programa que mostra os n�meros �mpares entre 18 e 347 em ordem crescente. 
*/
#include <stdio.h>
int main(){
	int n = 18;
	while(n < 348){
		n++;
		if(n % 2 != 0){
			printf("%d\n",n);			
		}
	}
	return 0;
}

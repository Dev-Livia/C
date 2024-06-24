/*
	Name: Lívia Nicole
	Date: 24/06/24 17:31
	Description: 2.	Faça um programa que solicita que o usuário digite três valores e imprima esses valores em ordem decrescente. 
*/
#include <stdio.h>
int main(){
	int n1,n2,n3;
	printf("Digite tres valores: ");
	scanf("%d %d %d",&n1, &n2, &n3);

	if(n1 > n2 && n2 > n3){
		printf("%d, %d, %d",n1,n2,n3);	
	}else if(n1 > n3 && n3 > n2){
		printf("%d, %d, %d",n1,n3,n2);
	}else if(n2 > n1 && n1 > n3){
		printf("%d, %d, %d",n2,n1,n3);
	}else if(n2 > n3 && n3 > n1){
		printf("%d, %d, %d",n2,n3,n1);
	}else if(n3 > n1 && n1 > n2){
		printf("%d, %d, %d",n3,n1,n2);
	}else if(n3 > n2 && n2 > n1){
		printf("%d, %d, %d",n3,n2,n1);
	}
	return 0;
}

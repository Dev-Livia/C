/*
	Name: L�via Nicole
	Date: 24/06/24 16:51
	Description: 1.	Fa�a um programa que solicita que o usu�rio digite tr�s valores e imprima esses valores em ordem crescente. 
*/
#include <stdio.h>
int main(){
	int n1,n2,n3;
	printf("Digite tres valores: ");
	scanf("%d %d %d",&n1, &n2, &n3);

	if(n1 < n2 && n2 < n3){
		printf("%d, %d, %d",n1,n2,n3);	
	}else if(n1 < n3 && n3 < n2){
		printf("%d, %d, %d",n1,n3,n2);
	}else if(n2 < n1 && n1 < n3){
		printf("%d, %d, %d",n2,n1,n3);
	}else if(n2 < n3 && n3 <n1){
		printf("%d, %d, %d",n2,n3,n1);
	}else if(n3 < n1 && n1 < n2){
		printf("%d, %d, %d",n3,n1,n2);
	}else if(n3 < n2 && n2 < n1){
		printf("%d, %d, %d",n3,n2,n1);
	}
	return 0;
}

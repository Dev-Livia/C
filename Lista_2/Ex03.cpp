/*
	Author: Livia Nicole 
	Date: 14/03/24 19:46
	Description: Faça um programa que solicita que o usuário digite três valores. O seu 
	programa deverá somar esses três valores digitados, e, caso o resultado 
	da soma dos três valores seja maior que o dobro do maior valor, a 
	diferença dos três valores digitados deverá ser impressa na tela. 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2,n3,soma = 0;
	printf("Digite 3 numeros: ");
	scanf("%d %d %d",&n1,&n2,&n3);	
	
	soma = n1 + n2 + n3;
	
	if(n1 > n2 && n1 > n3)
		printf("%d",n1);
	else if(n2 > n3 && n2 > n1)
		printf("%d",n2);
	
	
}


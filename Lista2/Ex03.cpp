/*
	Name: Livia Nicole
	Date: 24/06/24 17:38
	Description: 3.	Faça um programa que solicita que o usuário digite três valores. O seu programa deverá somar esses três valores digitados,
	 e,
	 caso o resultado da soma dos três valores seja maior que o dobro do maior valor,
	 a diferença dos três valores digitados deverá ser impressa na tela.  
*/
#include <stdio.h>
int main(){
	int n1, n2, n3, soma, diferenca, d = 0;
	printf("Digite tres numeros: ");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	soma = (n1+n2+n3);
	d = soma * 2;
	
	if(soma > d){
		diferenca = d - soma;
		printf("%d",diferenca);
	}
	else
		printf(":)");
}

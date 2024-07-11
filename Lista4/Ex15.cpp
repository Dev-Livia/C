/*
	Name: Lívia Nicole
	Date: 11/07/24 20:31
	Description: 15.	Faça um programa que solicita que o usuário digite 10 valores.
	 Ao final dos valores digitados o programa deverá mostrar na tela qual foi o menor valor digitado e qual maior valor digitado,
	  assim como o valor do resto da divisão do menor valor pelo maior valor. 

*/
#include <stdio.h>
int main(){
	int num = 0, contador = 1, menor_valor = 0, maior_valor = 0, resto = 0;
		printf("Digite o %d numero: ",contador);
		scanf("%d",&num);
		menor_valor = num;
		contador ++;
	do{
		printf("Digite o %d numero: ",contador);
		scanf("%d",&num);
		if(num < menor_valor){
			menor_valor = num;
		}else if(num > maior_valor){
			maior_valor = num;
		}
		contador ++;
	}while(contador <= 10);
	resto = (menor_valor % maior_valor);
printf("O maior valor eh %d\n",maior_valor);
printf("O menor valor eh %d\n",menor_valor);
printf("O resto da divisao do menor valor pelo maior valor eh: %d",resto);


	return 0;
}

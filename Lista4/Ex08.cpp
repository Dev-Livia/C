/*
	Name: Lívia Nicole
	Date: 11/07/24 16:23
	Description: 8.	Faça um programa que leia 15 números inteiros via teclado. O programa deverá: 
a.	Imprimir para cada verificação se o valor lido é par ou ímpar. 
b.	Informar quantos valores lidos são pares; 
c.	Informar quantos valores lidos são ímpares; 
d.	Informar se maior quantidade de valores lidos é par ou ímpar. 
RESOLVA OS EXERCÍCIOS USANDO SOMENTE O LAÇO DE REPETIÇÃO: DO WHILE. 
*/
#include <stdio.h>
int main(){
	int user_num = 0, contador = 1, impar = 0, par = 0, maior_qtd = 0, menor_qtd = 0;
	do{
		printf("digite o %d numero: ",contador);
		scanf("%d",&user_num);
		if(user_num % 2 == 0){
			par++;
			printf("O numero digitado é PAR.\n");
		}else{
			impar++;
			printf("O numero digitado eh IMPAR\n");
		}
		contador++;
	}while(contador <= 15 ); 
	printf("O total de numeros PARES : %d\n",par);
	printf("O total de numeros IMPARES: %d\n ",impar);
	return 0;
}

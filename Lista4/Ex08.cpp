/*
	Name: L�via Nicole
	Date: 11/07/24 16:23
	Description: 8.	Fa�a um programa que leia 15 n�meros inteiros via teclado. O programa dever�: 
a.	Imprimir para cada verifica��o se o valor lido � par ou �mpar. 
b.	Informar quantos valores lidos s�o pares; 
c.	Informar quantos valores lidos s�o �mpares; 
d.	Informar se maior quantidade de valores lidos � par ou �mpar. 
RESOLVA OS EXERC�CIOS USANDO SOMENTE O LA�O DE REPETI��O: DO WHILE. 
*/
#include <stdio.h>
int main(){
	int user_num = 0, contador = 1, impar = 0, par = 0, maior_qtd = 0, menor_qtd = 0;
	do{
		printf("digite o %d numero: ",contador);
		scanf("%d",&user_num);
		if(user_num % 2 == 0){
			par++;
			printf("O numero digitado � PAR.\n");
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

/*
	Name: Lívia Nicole
	Date: 08/07/24 21:14
	Description: 7.	Faça um programa que solicita que o usuário digite 10 valores.
	 O programa deverá contar quantos valores estão dentro do intervalo ]10,157[ e quantos valores estão fora desse intervalo. 
	 RESOLVA OS EXERCÍCIOS USANDO SOMENTE O LAÇO DE REPETIÇÃO: DO WHILE. 
*/
#include <stdio.h>
int main(){
	int user_Num = 0, numeros_dentro = 0,numeros_fora = 0, contador = 1;
	do{
		printf("Digite o %d numero: ",contador);
		scanf("%d",&user_Num);
		if(user_Num > 10 && user_Num < 158){
			numeros_dentro++;
		}
		else{
			numeros_fora++;
		}
		contador++;
	}while(contador <= 10);
		printf("O total de numeros dentro do intervalo eh: %d\n",numeros_dentro);
		printf("O total de numeros fora do intervalo eh: %d",numeros_fora);
	return 0;
}

/*
	Name: L�via Nicole
	Date: 08/07/24 21:14
	Description: 7.	Fa�a um programa que solicita que o usu�rio digite 10 valores.
	 O programa dever� contar quantos valores est�o dentro do intervalo ]10,157[ e quantos valores est�o fora desse intervalo. 
	 RESOLVA OS EXERC�CIOS USANDO SOMENTE O LA�O DE REPETI��O: DO WHILE. 
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

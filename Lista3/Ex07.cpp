/*
	Name: L�via Nicole
	Date: 03/07/24 14:09
	Description: 7.	Fa�a um programa que solicita que o usu�rio digite 10 valores.
	 O programa dever� contar quantos valores est�o dentro do intervalo ]10,157[ e quantos valores est�o fora desse intervalo. 
*/
#include<stdio.h>
int main(){
	int contador = 0, dentro_intervalo = 0,fora_intervalo = 0,user_num = 0;
	
	while(contador <= 9){
		contador ++;
		printf("Digite o %d numero: ",contador);
		scanf("%d",&user_num);
		
		if( user_num >= 10 && user_num <= 157){
			dentro_intervalo++;
			}
		else{
			fora_intervalo++;}
		}
		
		printf("O total de numeros fora do intervalo e: %d \nO total de numeros dentro do intervalo e: %d",fora_intervalo,dentro_intervalo);
		
	
	return 0 ;
}

/*
	Name: Livia Nicole
	Date: 08/07/24 20:23
	Description: 5.	Fa�a um programa para verificar se um n�mero � par ou �mpar dentro de um intervalo solicitado pelo pr�prio usu�rio. 
*/
#include <stdio.h>
int main(){
	int primeiro_Intervalo = 0, segundo_Intervalo = 0;
	printf("Digite 2 numeros: ");
	scanf("%d %d",&primeiro_Intervalo,&segundo_Intervalo);
	
	do{
		if(primeiro_Intervalo % 2 == 0){
			printf("Par: %d\n",primeiro_Intervalo);
		}else{
			printf("Impar: %d\n",primeiro_Intervalo);
		}
		
		primeiro_Intervalo++;
		
      }while(primeiro_Intervalo <= segundo_Intervalo);	
      
	return 0;
}

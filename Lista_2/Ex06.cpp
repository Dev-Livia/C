/*
	Author: Livia Nicole
	Date: 17/03/24 23:06
	Description: 6.	Repita o exerc�cio anterior, e, para cada vez que o n�mero se encontrar dentro do intervalo, 
	deve ser calculada a diferen�a do triplo desse valor com seu antecessor e caso n�o esteja dentro do intervalo,
	dever� ser calculado o resto da divis�o desse valor pela d�cima parte inteira do seu sucessor.  
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num, diferenca, triplo, decimaPSucessor = 0;
	printf("Digite um numero: ");
	scanf("%d",&num);
	if(num >= 100 && num <= 500){
		num -= 1;
		diferenca = num * 3;
		printf("%d",diferenca);
	}else{
		 num += 1;
		 decimaPSucessor = num / 10;
		printf("%d",decimaPSucessor);
	}
  return 0;
}

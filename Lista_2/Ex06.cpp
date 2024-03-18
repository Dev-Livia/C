/*
	Author: Livia Nicole
	Date: 17/03/24 23:06
	Description: 6.	Repita o exercício anterior, e, para cada vez que o número se encontrar dentro do intervalo, 
	deve ser calculada a diferença do triplo desse valor com seu antecessor e caso não esteja dentro do intervalo,
	deverá ser calculado o resto da divisão desse valor pela décima parte inteira do seu sucessor.  
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

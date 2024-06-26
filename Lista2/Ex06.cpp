/*
	Name: Lívia Nicole
	Date: 26/06/24 02:47
	Description: 6.	Repita o exercício anterior, e, para cada vez que o número se encontrar dentro do intervalo,
	 deve ser calculada a diferença do triplo desse valor com seu antecessor e caso não esteja dentro do intervalo,
	 deverá ser calculado o resto da divisão desse valor pela décima parte inteira do seu sucessor.  
*/
#include <stdio.h>
int main(){
	int num,num_ant_suce, diferenca = 0;
	printf("Digite um número: ");
	scanf("%d",&num);
	num_ant_suce = num;
	
	if(num > 100 && num < 500){
		diferenca = (num * 3);
		num_ant_suce -= 1;
		diferenca = (diferenca - num_ant_suce);
		printf("a diferença do triplo desse valor com seu antecessor eh %d",diferenca);
	}else{
		num += 1;
		diferenca = (num % (num_ant_suce / 10));
		printf("o resto da divisão desse valor pela décima parte inteira do seu sucessor eh %d",diferenca);
	}
	return 0;
}

/*
	Name: L�via Nicole
	Date: 26/06/24 02:47
	Description: 6.	Repita o exerc�cio anterior, e, para cada vez que o n�mero se encontrar dentro do intervalo,
	 deve ser calculada a diferen�a do triplo desse valor com seu antecessor e caso n�o esteja dentro do intervalo,
	 dever� ser calculado o resto da divis�o desse valor pela d�cima parte inteira do seu sucessor.  
*/
#include <stdio.h>
int main(){
	int num,num_ant_suce, diferenca = 0;
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	num_ant_suce = num;
	
	if(num > 100 && num < 500){
		diferenca = (num * 3);
		num_ant_suce -= 1;
		diferenca = (diferenca - num_ant_suce);
		printf("a diferen�a do triplo desse valor com seu antecessor eh %d",diferenca);
	}else{
		num += 1;
		diferenca = (num % (num_ant_suce / 10));
		printf("o resto da divis�o desse valor pela d�cima parte inteira do seu sucessor eh %d",diferenca);
	}
	return 0;
}

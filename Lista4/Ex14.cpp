/*
	Name: Lívia Nicole 
	Date: 11/07/24 20:13
	Description: 14.Faça um programa que solicita que o usuário digite 10 valores. 
	Ao final dos valores digitados o programa deverá mostrar na tela qual foi o menor valor digitado. 
*/
#include <stdio.h>

int main() {
    int user_num, menor_valor, contador = 1;

    
    printf("Informe o %dº valor: ", contador);
    scanf("%d", &user_num);
  
    menor_valor = user_num;

    contador++;

    do {
        printf("Informe o %dº valor: ", contador);
        scanf("%d", &user_num);


        if (user_num < menor_valor) {
            menor_valor = user_num;
        }

        contador++;
    } while (contador <= 10);

    printf("O menor valor é: %d\n", menor_valor);

    return 0;
}



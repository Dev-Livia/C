/*
	Name: Lívia Nicole 
	Date: 30/06/24 13:05
	Description: 
	RESOLVA OS EXERCÍCIOS USANDO SOMENTE O LAÇO WHILE. 
	5.	Faça um programa para verificar se um número é par ou ímpar dentro de um intervalo solicitado pelo próprio usuário. 
*/
#include <stdio.h>

int main() {
    int primeiro_Intervalo, segundo_Intervalo;
    printf("Digite o primeiro numero e o segundo numero do intervalo: ");
    scanf("%d %d", &primeiro_Intervalo, &segundo_Intervalo);
    

    if (primeiro_Intervalo > segundo_Intervalo) {
        int temp = primeiro_Intervalo;
        primeiro_Intervalo = segundo_Intervalo;
        segundo_Intervalo = temp;
    }


    while (primeiro_Intervalo <= segundo_Intervalo) {
        if (primeiro_Intervalo % 2 == 0) {
            printf("Numero Par: %d\n", primeiro_Intervalo);
        } else {
            printf("Numero Impar: %d\n", primeiro_Intervalo);
        }
        primeiro_Intervalo++;
    }

    return 0;
}


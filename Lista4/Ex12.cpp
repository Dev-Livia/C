/*
	Name: Lívia 
	Date: 11/07/24 19:46
	Description: 12.	Faça um programa que calcula o fatorial de um número sabendo que: 
o	Fatorial de 0: 0! (lê-se 0 fatorial) - 0! = 1 
o	Fatorial de 1: 1! (lê-se 1 fatorial) - 1! = 1 
o	Fatorial de 2: 2! (lê-se 2 fatorial) - 2! = 2 . 1 = 2 
o	Fatorial de 3: 3! (lê-se 3 fatorial) - 3! = 3 . 2 . 1 = 6 
o	Fórmula geral: n(n-1) 

*/
#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    
    if (numero < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        
        int i = numero;
        do {
            fatorial *= i;
            i--;
        } while (i > 0);

        printf("O fatorial de %d é: %d\n", numero, fatorial);
    }

    return 0;
}


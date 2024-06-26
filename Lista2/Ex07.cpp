/*
	Name: Livia Nicole
	Date: 26/06/24 04:01
	Description:7.	Faça um programa que receba dois números e verifica qual dos dois é maior, caso sejam iguais o programa deve dizer que são iguais.
	 Na sequência, o seu programa deverá calcular o quadrado da diferença do maior número com seu primeiro sucessor que seja ímpar.  
*/
#include <stdio.h>
int main() {
    int num1, num2, maior, diferenca, quadrado;

    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    diferenca = num1 - num2;
    quadrado = diferenca * diferenca;

    if (quadrado % 2 != 0) {
        if (num1 > num2) {
            maior = num1;
        } else if (num2 > num1) {
            maior = num2;
        } else {
            printf("Os números sao iguais.\n");
            return 0; 
        }

        printf("A diferença eh %d\n", quadrado);
    } else {
        printf("Os números sao iguais.\n");
    }

    return 0;
}



/*
	Name: Livia Nicole
	Date: 26/06/24 04:01
	Description:7.	Fa�a um programa que receba dois n�meros e verifica qual dos dois � maior, caso sejam iguais o programa deve dizer que s�o iguais.
	 Na sequ�ncia, o seu programa dever� calcular o quadrado da diferen�a do maior n�mero com seu primeiro sucessor que seja �mpar.  
*/
#include <stdio.h>
int main() {
    int num1, num2, maior, diferenca, quadrado;

    printf("Digite dois n�meros: ");
    scanf("%d %d", &num1, &num2);

    diferenca = num1 - num2;
    quadrado = diferenca * diferenca;

    if (quadrado % 2 != 0) {
        if (num1 > num2) {
            maior = num1;
        } else if (num2 > num1) {
            maior = num2;
        } else {
            printf("Os n�meros sao iguais.\n");
            return 0; 
        }

        printf("A diferen�a eh %d\n", quadrado);
    } else {
        printf("Os n�meros sao iguais.\n");
    }

    return 0;
}



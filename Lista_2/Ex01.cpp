/*
	Author: Lívia Nicole 
	Date: 14/03/24 18:57
	Description: Faça um programa que solicita que o usuário digite três valores e 
imprima esses valores em ordem crescente
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 < num2 && num2 < num3)
        printf("%d, %d, %d", num1, num2, num3);
    else if (num3 < num1 && num1 < num2)
        printf("%d, %d, %d", num3, num1, num2);
    else if (num2 < num1 && num1 < num3)
        printf("%d, %d, %d", num2, num1, num3);
    else if (num3 < num2 && num2 < num1)
        printf("%d, %d, %d", num3, num2, num1);
    else if (num2 < num3 && num3 < num1)
        printf("%d, %d, %d", num2, num3, num1);

    return 0;
}


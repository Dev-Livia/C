/*
	Name: Lívia Nicole
	Date: 11/07/24 17:17
	Description: 10.	Faça um programa que verifica quais são os divisores de um número. Por exemplo, ao digitar os números abaixo, o programa deverá imprimir: 
o	48: 1,2,3,4,6,8,12,16,24,48 
o	3: 1,3 
o	726: 1,2,3,6,11,22,33,66,121,242,363,726 

*/
#include <stdio.h>

int main() {
    int num, i = 1;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Os divisores de %d são: ", num);

    // Usando do-while para encontrar os divisores
    do {
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= num);

    printf("\n");

    return 0;
}


/*
	Name: Lívia Nicole
	Date: 05/07/24 15:14
	Description: 10.	Faça um programa que verifica quais são os divisores de um número. Por exemplo, ao digitar os números abaixo, o programa deverá imprimir: 
o	48: 1,2,3,4,6,8,12,16,24,48 
o	3: 1,3 
o	726: 1,2,3,6,11,22,33,66,121,242,363,726 

*/
#include <stdio.h>

int main() {
    int numbers[] = {48, 3, 726};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i = 0;

    while (i < size) {
        int number = numbers[i];
        int j = 1;

        printf("%d: ", number);
        
        while (j <= number) {
            if (number % j == 0) {
                printf("%d", j);
                if (j != number) {
                    printf(",");
                }
            }
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}


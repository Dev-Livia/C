/*
	Name: l�via Nicole
	Date: 28/06/24 17:28
	Description: 8.	Fa�a um programa que deve retornar os divisores do valor digitado. A verifica��o deve ser feita para os valores 2, 3 e 7. 
Por exemplo: ao digitar os seguintes valores, o programa deve imprimir na tela: 
o	40: divis�vel somente por 2;
o   15: divis�vel somente por 3; 
o	35: divis�vel somente por 7; 
o	18: divis�vel por 2 e por 3 simultaneamente; 
o	28: divis�vel por 2 e por 7 simultaneamente; 
o	147: divis�vel por 3 e por 7 simultaneamente; 
o	84: divis�vel por 2, 3 e 7 simultaneamente; 
*/
#include <stdio.h>

int main() {
    int numeros[] = {40, 15, 35, 18, 28, 147, 84};
    int i;

    for (i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
        int numero = numeros[i];
        printf("Para o numero %d: ", numero);

        if (numero % 2 == 0) {
            printf("divisivel somente por 2; ");
        }
        if (numero % 3 == 0) {
            printf("divisivel somente por 3; ");
        }
        if (numero % 7 == 0) {
            printf("divisivel somente por 7; ");
        }
        if (numero % 2 == 0 && numero % 3 == 0) {
            printf("divisivel por 2 e por 3 simultaneamente; ");
        }
        if (numero % 2 == 0 && numero % 7 == 0) {
            printf("divisivel por 2 e por 7 simultaneamente; ");
        }
        if (numero % 3 == 0 && numero % 7 == 0) {
            printf("divisivel por 3 e por 7 simultaneamente; ");
        }
        if (numero % 2 == 0 && numero % 3 == 0 && numero % 7 == 0) {
            printf("divisivel por 2, 3 e 7 simultaneamente; ");
        }

        printf("\n");
    }

    return 0;
}


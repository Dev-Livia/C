/*
	Ex08 
	Author:L�via Nicole  
	Date: 06/03/24 04:24
	Description: 10.Fa�a um programa que imprima os m�ltiplos de 7 no intervalo ]234, 782[. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int limite_inferior = 235; 
    int limite_superior = 781;  

    for (int i = limite_inferior; i < limite_superior; ++i) {
        if (i % 7 == 0) {
            printf("%d � m�ltiplo de 7\n", i);
        }
    }

    return 0;
}


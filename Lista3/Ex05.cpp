/*
	Name: L�via Nicole 
	Date: 30/06/24 13:05
	Description: 
	RESOLVA OS EXERC�CIOS USANDO SOMENTE O LA�O WHILE. 
	5.	Fa�a um programa para verificar se um n�mero � par ou �mpar dentro de um intervalo solicitado pelo pr�prio usu�rio. 
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


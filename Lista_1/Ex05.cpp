/*
	Ex05
	Author: Lívia nicole 
	Date: 07/03/24 04:15
	Description: 1.	Faça um programa que teste os operadores lógico AND(&&) e OR(||). 
*/
#include <stdio.h>
#include <stdlib.h>
// OPERADOR AND &&
int main() {
    float N1, N2, media;
    int falta;
    printf("Digite a primeira nota: ");
    scanf("%f", &N1);
    printf("Digite a segunda nota: ");
    scanf("%f", &N2);
    printf("Informe quantas faltas o aluno possui? ");
    scanf("%d", &falta);
    media = (N1 + N2) / 2;

if (media >= 6 && falta < 5)
        printf("O aluno foi APROVADO");
    else
        printf("O aluno foi reprovado");

    return 0;	
}  

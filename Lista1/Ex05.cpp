/*
	Name: Lívia Nicole
	Date: 24/06/24 14:25
	Description: 5.	Faça um programa que teste os operadores lógico AND(&&) e OR(||). 
*/
#include <cstdio>

int main() {
    char jaComeu;
    char querComer;

    
    printf("Você já comeu hoje? (s/n): ");
    scanf(" %c", &jaComeu); 

    
    printf("Você quer comer algo? (s/n): ");
    scanf(" %c", &querComer);
    
    if (jaComeu == 'n' && querComer == 's') {
        printf("Você deve comer algo!\n");
    } else if (jaComeu == 's' && querComer == 'n') {
        printf("Que bom que você já comeu!\n");
    } else if (jaComeu == 'n' && querComer == 'n') {
        printf("Tudo bem, mas não se esqueça de comer mais tarde.\n");
    } else if (jaComeu == 's' && querComer == 's') {
        printf("Parece que você está com");}
}

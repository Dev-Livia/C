/*
	Name: L�via Nicole
	Date: 24/06/24 14:25
	Description: 5.	Fa�a um programa que teste os operadores l�gico AND(&&) e OR(||). 
*/
#include <cstdio>

int main() {
    char jaComeu;
    char querComer;

    
    printf("Voc� j� comeu hoje? (s/n): ");
    scanf(" %c", &jaComeu); 

    
    printf("Voc� quer comer algo? (s/n): ");
    scanf(" %c", &querComer);
    
    if (jaComeu == 'n' && querComer == 's') {
        printf("Voc� deve comer algo!\n");
    } else if (jaComeu == 's' && querComer == 'n') {
        printf("Que bom que voc� j� comeu!\n");
    } else if (jaComeu == 'n' && querComer == 'n') {
        printf("Tudo bem, mas n�o se esque�a de comer mais tarde.\n");
    } else if (jaComeu == 's' && querComer == 's') {
        printf("Parece que voc� est� com");}
}

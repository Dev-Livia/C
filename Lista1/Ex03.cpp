/*
	Author: L�via Nicole 
	Date: 04/06/24 23:49
	Description: 3.	Fa�a um programa que calcule a m�dia de dois n�meros. 
*/
#include <stdio.h>
int main(){
	int n1,n2,media;
	printf("Insira a primeira e a segunda nota:\n ");
	scanf("%d %d",&n1, &n2);
	
	media = (n1+n2)/2;
	
	printf("A media final e %d.",media);
	return 0;
}

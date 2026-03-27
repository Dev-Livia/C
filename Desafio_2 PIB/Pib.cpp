/*
 
	Date: 26/03/26 21:26
	Description: Calculando Densidade Populacional e PIB per Capita
	Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.
 

Exemplo de Saída:

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais


*/

#include <stdio.h>
int main()
{
	printf("*** CALCULANDO DENSIDADE POPULACIONAL PIB ***\n");
	
	float Populacao, Area, Densidade, Pib, Pib_Carpita;
	
	int Qtd_PontosTuristicos, Carta;
	
	char Estado[100], Codigo[20], Cidade[100];
	
	printf("Carta: "); scanf("%d", &Carta);
	
	printf("\nEstado: "); scanf(" %s", &Estado);
	
	printf("\nCódigo: "); scanf(" %s", &Codigo);
	
	printf("\nNome da Cidade: "); scanf(" %s", &Cidade);
	
	printf("\nPopulação: "); scanf(" %f",&Populacao);
	
	printf("\nPIB: "); scanf(" %f",&Pib);
	
	printf("\nQtd_PontosTuristicos: "); scanf(" %d",&Qtd_PontosTuristicos);
	

	Densidade = Populacao / Area;
	
	Pib_Carpita = Pib / Populacao;
	
	
	// --- Exibição dos Resultados ---

printf("\nCarta %d:\n", Carta);
printf("Estado: %s\n", Estado);
printf("Código: %s\n", Codigo);
printf("Nome da Cidade: %s\n", Cidade);
printf("População: %.0f\n", Populacao); // %.0f remove as casas decimais de números inteiros
printf("Área: %.2f km²\n", Area);
printf("PIB: %.2f bilhões de reais\n", Pib);
printf("Número de Pontos Turísticos: %d\n", Qtd_PontosTuristicos);
printf("Densidade Populacional: %.2f hab/km²\n", Densidade);
printf("PIB per Capita: %.2f reais\n", Pib_Carpita);
	
	
	
	
	
}

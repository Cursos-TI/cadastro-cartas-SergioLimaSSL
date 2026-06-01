#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, pturistico1, populacao2, pturistico2;
  float area1, pib1, area2, pib2;
  char estado1, codigo1[4], cidade1[50], estado2, codigo2[4], cidade2[50];

  // Área para entrada de dados
  //Entrada de dados da carta 1 pelo usuario
  printf("Digite os dados referentes a Carta numero 1:\n");
  printf("Letra do Estado:\n");
  scanf("%c", &estado1);
  printf("Codigo:\n");
  scanf(" %s", codigo1);
  printf("Nome da cidade:\n");
  scanf(" %s", cidade1);
  printf("Populacao:\n");
  scanf("%d", &populacao1);
  printf("Area:\n");
  scanf("%f", &area1);
  printf("PIB:\n");
  scanf("%f", &pib1);
  printf("Numero de pontos turisticos:\n");
  scanf("%d", &pturistico1);

  //Entrada de dados da carta 2 pelo usuario
  printf("\nDigite os dados referentes a Carta numero 2:\n");
  printf("Letra do Estado:\n");
  scanf(" %c", &estado2);
  printf("Codigo:\n");
  scanf(" %s", codigo2);
  printf("Nome da cidade:\n");
  scanf(" %s", cidade2);
  printf("Populacao:\n");
  scanf("%d", &populacao2);
  printf("Area em km2:\n");
  scanf("%f", &area2);
  printf("PIB em Bilhoes de reais:\n");
  scanf("%f", &pib2);
  printf("Numero de pontos turisticos:\n");
  scanf("%d", &pturistico2);
  
  // Área para exibição dos dados da cidade
  //Descrição da carta número 1
  printf("\nCarta 1:\n");
  printf("Letra do Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Numero de pontos turisticos: %d\n", pturistico1);
  
  //Descrição da carta número 2
  printf("\nCarta 2:\n");
  printf("Letra do Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de pontos turisticos: %d\n", pturistico2);

return 0;
} 

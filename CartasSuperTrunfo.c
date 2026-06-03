#include <stdio.h> 

int main() { 
 
  int populacao1, pturistico1, populacao2, pturistico2;
  float area1, pib1, area2, pib2;
  char estado1, codigo1[4], cidade1[50], estado2, codigo2[4], cidade2[50];
  float densidade1, densidade2, pibpercap1, pibpercap2;
  float SuperPoder1, SuperPoder2;
  int comparacaoPopulacao, comparacaoArea, comparacaoPib, comparacaoPTurist, comparacaoDensidade, comparacaoPibpercap, comparacaoSuperPoder;

  // Entrada de dados da carta 1 pelo usuario
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

  // Entrada de dados da carta 2 pelo usuario
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

  // ---------------------------------------------------------------------
  // -- Calculo da densidade populacional, PIB per capita e Super Poder --
  // ---------------------------------------------------------------------

  // DENSIDADES
  densidade1 = (float) populacao1 / area1;
  densidade2 = (float) populacao2 / area2;

  // PIB per Capita
  pibpercap1 = (float) (pib1 / populacao1) * 1000000000;
  pibpercap2 = (float) (pib2 / populacao2) * 1000000000;

  //Super Poder
  SuperPoder1 = (float) populacao1 + area1 + pib1 + pturistico1 + pibpercap1 + (1/densidade1);
  SuperPoder2 = (float) populacao2 + area2 + pib2 + pturistico2 + pibpercap2 + (1/densidade2);


  // Descrição da carta número 1
  printf("\nCarta 1:\n");
  printf("Letra do Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Numero de pontos turisticos: %d\n", pturistico1);
  printf("Densidade populacional: %.2f hab/km2 \n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibpercap1);
  printf("Super Poder: %.2f\n", SuperPoder1);
  
  // Descrição da carta número 2
  printf("\nCarta 2:\n");
  printf("Letra do Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de pontos turisticos: %d\n", pturistico2);
  printf("Densidade populacional: %.2f hab/km2 \n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibpercap2);
  printf("Super Poder: %.2f\n", SuperPoder2);

  // ------------------------------
  // -- Comparação de resultados --
  // ------------------------------

  comparacaoPopulacao = populacao1 > populacao2;
  comparacaoArea = area1 > area2;
  comparacaoPib = pib1 > pib2;
  comparacaoPTurist = pturistico1 > pturistico2;
  comparacaoDensidade = densidade1 < densidade2;
  comparacaoPibpercap = pibpercap1 > pibpercap2;
  comparacaoSuperPoder = SuperPoder1 > SuperPoder2;

  printf("\nComparacao de Cartas:\n");
  printf("**(1) Carta 1 vence / (0) Carta 2 vence**\n");
  printf("Populacao: (%d)\n", comparacaoPopulacao);
  printf("Area: (%d)\n", comparacaoArea);
  printf("PIB: (%d)\n", comparacaoPib);
  printf("Numero de pontos turisticos: (%d)\n", comparacaoPTurist);
  printf("Densidade populacional: (%d)\n", comparacaoDensidade);
  printf("PIB per Capita: (%d)\n", comparacaoPibpercap);
  printf("Super Poder: (%d)\n", comparacaoSuperPoder);

  return 0; 
} 

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
  int pontos_turisticos1;
  unsigned long int populacao1;
  float area1, pib1, densidade1, capita1, superpoder1;
  char estado1[2], codigo1[4], cidade1[20];

  // Carta 2
  int pontos_turisticos2;
  unsigned long int populacao2;
  float area2, pib2, densidade2, capita2, superpoder2;
  char estado2[2], codigo2[4], cidade2[20];

  // Área para entrada de dados

  // Saudação ao jogador
  printf("*** Bem-Vindo ao Jogo Super Trunfo! ***\n");

  printf("\n");

  // Cadastro da primeira carta
  printf("Insira os dados da primeira carta! \n");

  printf("\n");

  printf("Estado: \n");
  scanf("%s", &estado1);

  printf("Código: \n");
  scanf("%s", &codigo1);

  printf("Cidade: \n");
  scanf("%s", &cidade1);

  printf("População: \n");
  scanf("%lu", &populacao1);

  printf("Área: \n");
  scanf("%f", &area1);

  printf("PIB: \n");
  scanf("%f", &pib1);

  printf("Nº de Pontos Turísticos: \n");
  scanf("%d", &pontos_turisticos1);

  // Cálculo da Densidade Populacional
  densidade1 = populacao1 / area1;

  // Cálculo do PIB per Capita
  capita1 = (pib1 * 1000000000) / populacao1;

  // Cálculo do Super Poder
  superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + capita1 + (1.0 / densidade1);

  printf("\n");

  // Cadastro da segunda carta
  printf("Insira os dados da segunda carta! \n");

  printf("\n");

  printf("Estado: \n");
  scanf("%s", &estado2);

  printf("Código: \n");
  scanf("%s", &codigo2);

  printf("Cidade: \n");
  scanf("%s", &cidade2);

  printf("População: \n");
  scanf("%lu", &populacao2);

  printf("Área: \n");
  scanf("%f", &area2);

  printf("PIB: \n");
  scanf("%f", &pib2);

  printf("Nº de Pontos Turísticos: \n");
  scanf("%d", &pontos_turisticos2);

  // Cálculo da Densidade Populacional
  densidade2 = populacao2 / area2;

  // Cálculo do PIB per Capita
  capita2 = (pib2 * 1000000000) / populacao2;

  // Cálculo do Super Poder
  superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + capita2 + (1.0 / densidade2);

    printf("\n");

  printf("Cartas cadastradas com sucesso! \n");

  printf("\n");

  // Área para exibição dos dados da cidade
  
  // Dados da primeira carta
  printf("Carta 1: \n");

  printf("Estado: %s \n", estado1);

  printf("Código: %s \n", codigo1);

  printf("Nome da Cidade: %s \n", cidade1);

  printf("População: %lu \n", populacao1);

  printf("Área: %.2f Km² \n", area1);

  printf("PIB: %.2f Bilhões de reais \n", pib1);

  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);

  printf("Densidade Populacional: %.2f hab/km² \n", densidade1);

  printf("PIB per Capita: %.2f reais \n", capita1);

  printf("Super Poder: %.2f \n", superpoder1);

  printf("\n");

  // Dados da segunda carta
  printf("Carta 2: \n");

  printf("Estado: %s \n", estado2);

  printf("Código: %s \n", codigo2);

  printf("Nome da Cidade: %s \n", cidade2);

  printf("População: %lu \n", populacao2);

  printf("Área: %.2f Km² \n", area2);

  printf("PIB: %.2f Bilhões de reais \n", pib2);

  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

  printf("Densidade Populacional: %.2f hab/km² \n", densidade2);

  printf("PIB per Capita: %.2f reais \n", capita2);

  printf("Super Poder: %.2f \n", superpoder2);

  printf("\n");

  //Comparação das cartas
  printf("*** Comparação das Cartas ***\n");
  


return 0;
} 

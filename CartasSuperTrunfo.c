#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
  int populacao1, pontos_turisticos1;
  float area1, pib1;
  char estado1[10], codigo1[20], cidade1[20];

  // Carta 2
  int populacao2, pontos_turisticos2;
  float area2, pib2;
  char estado2[10], codigo2[20], cidade2[20];

  // Área para entrada de dados

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
  scanf("%d", &populacao1);

  printf("Área: \n");
  scanf("%f", &area1);

  printf("PIB: \n");
  scanf("%f", &pib1);

  printf("Nº de Pontos Turísticos: \n");
  scanf("%d", &pontos_turisticos1);

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
  scanf("%d", &populacao2);

  printf("Área: \n");
  scanf("%f", &area2);

  printf("PIB: \n");
  scanf("%f", &pib2);

  printf("Nº de Pontos Turísticos: \n");
  scanf("%d", &pontos_turisticos2);

  printf("\n");

  printf("Cartas cadastradas com sucesso! \n");

  printf("\n");

  // Área para exibição dos dados da cidade
  
  // Dados da primeira carta
  printf("Carta 1: \n");

  printf("Estado: %s \n", estado1);

  printf("Código: %s \n", codigo1);

  printf("Nome da Cidade: %s \n", cidade1);

  printf("População: %d \n", populacao1);

  printf("Área: %.2f Km² \n", area1);

  printf("PIB: %.2f Bilhões de reais \n", pib1);

  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);

  printf("\n");

  // Dados da segunda carta
  printf("Carta 2: \n");

  printf("Estado: %s \n", estado2);

  printf("Código: %s \n", codigo2);

  printf("Nome da Cidade: %s \n", cidade2);

  printf("População: %d \n", populacao2);

  printf("Área: %.2f Km² \n", area2);

  printf("PIB: %.2f Bilhões de reais \n", pib2);

  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

  printf("\n");




return 0;
} 

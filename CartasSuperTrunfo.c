#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, pontos_turisticos1;
  float area1, pib1;
  char estado1, codigo1, cidade1;

  // Área para entrada de dados
  // Carta 1
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

  // Área para exibição dos dados da cidade

return 0;
} 

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

  //Variável para escolha do menu interativo
  int opcao;

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

  //Cálculos carta 1
  
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

  //Cálculos carta 2
  
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

  printf("\n");
  
  //Menu interativo
  printf("*** Menu de Atributos ***\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de Pontos Turísticos\n");
  printf("5. Densidade Demográfica (o menor vence)\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  printf("\n");

  //Estrutura switch
  switch (opcao) {
  case 1: //Comparação por População
    printf("Atributo: População\n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if(populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

  case 2: //Comparação por Área
    printf("Atributo: Área\n");
    printf("Carta 1 - %s: %.2f Km²\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f Km²\n", cidade2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if(area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

  case 3: //Comparação por PIB
    printf("Atributo: PIB\n");
    printf("Carta 1 - %s: %.2f Reais\n", cidade1, capita1);
    printf("Carta 2 - %s: %.2f Reais\n", cidade2, capita2);
    if (capita1 > capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if(capita2 > capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

  case 4: //Comparação por Pontos Turísticos
    printf("Atributo: Nº Pontos Turísticos\n");
    printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
    printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if(pontos_turisticos2 > pontos_turisticos1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

  case 5: //Comparação por Densidade Demográfica
    printf("Atributo: Densidade Demográfica\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if(densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
  
  default:
    printf("Opção Inválida! Execute o programa novamente.");
    break;
  }
    
  printf("\n");
  
return 0;
} 

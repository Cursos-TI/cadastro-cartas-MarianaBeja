#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  
  // Declaração de Variaveis
  char estado1, estado2; // Variavel de estados
  char codigocarta1[4], codigocarta2[4]; // Variavel de código das cidades
  char nomecidade1[25], nomecidade2[25]; // Variavel de nome das cidades
  int populacao1, populacao2; // Variavel de habitantes 
  float area1, area2; // Variavel de Area da cidades
  float pib1, pib2; // variavel de PIB da cidade
  int ponto1, ponto2; // Variavel de pontos turisticos
  float densidade1, densidade2; // Variavel da Densidade populacional
  float percapita1, percapita2; // Variavel do PIB per capita

  // Saudações para o usuário
  printf("*** Bem-vindo ao Super Trunfo! ***\n");
  printf("Compare suas as cartas e vença no campo de batalha!!\n\n");

  // instruções do sistema
  printf("Insira a seguir as informações das cartas 01 e 02\n");

  // Entrada de dados da carta 01
  printf("- Cadastro da Carta 01\n\n");
  printf("Informe o estado da sua carta: \n");
  scanf("%s", &estado1);

  printf("- Informe o código da cidade de sua carta (ex: A01, B03): \n");
  scanf("%s", codigocarta1);

  printf("Insira o nome da cidade de sua carta: \n");
  scanf("%s", nomecidade1);

  printf("Insira a População da cidade de sua carta: \n");
  scanf("%d", &populacao1);

  printf("Insira a área da cidade de sua carta em Km²: \n");
  scanf("%f", &area1);

  printf("Insira o PIB da cidade de sua carta: \n");
  scanf("%f", &pib1);

  printf("Insira a quantidade de pontos turísticos da cidade de sua carta: \n");
  scanf("%d", &ponto1);
  
  // Entrada de dados da carta 02
  printf("- Cadastro da Carta 02\n\n");
  printf("Informe o estado da sua carta: \n");
  scanf("%s", &estado2);

  printf("- Informe o código da cidade de sua carta (ex: A01, B03): \n");
  scanf("%s", codigocarta2);

  printf("Insira o nome da cidade de sua carta: \n");
  scanf("%s", nomecidade2);

  printf("Insira a População da cidade de sua carta: \n");
  scanf("%d", &populacao2);

  printf("Insira a área da cidade de sua carta em Km²: \n");
  scanf("%f", &area2);

  printf("Insira o PIB da cidade de sua carta: \n");
  scanf("%f", &pib2);

  printf("Insira a quantidade de pontos turísticos da cidade de sua carta: \n");
  scanf("%d", &ponto2);

  //Operações de Densidade e PIB per capita carta 01
  densidade1 = populacao1 / area1;
  percapita1 = pib1 / populacao1;

    //Operações de Densidade e PIB per capita carta 01
  densidade2 = populacao2 / area2;
  percapita2 = pib2 / populacao2;

  // Saída de dados da carta 01
  printf("Informações da carta 01:\n\n");
  printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação da Cidade: %d\nÁrea da Cidade: %.2f\nPIB da Cidade: %.2f\nQuantidade de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n\n", estado1, codigocarta1, nomecidade1, populacao1, area1, pib1, ponto1, densidade1, percapita1);
  
  printf("Informações da carta 02:\n\n");
  printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação da Cidade: %d\nÁrea da Cidade: %.2f\nPIB da Cidade: %.2f\nQuantidade de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n\n", estado2, codigocarta2, nomecidade2, populacao2, area2, pib2, ponto2, densidade2, percapita2);

return 0;
} 
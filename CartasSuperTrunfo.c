#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Declaração de Variaveis
  char estado1, estado2; // Variavel de estados
  char codigocarta1[4], codigocarta2[4]; // Variavel de código das cidades
  char nomecidade1[25], nomecidade2[25]; // Variavel de nome das cidades
  int populacao1, populacao2; // Variavel de habitantes 
  float area1, area2; // Variavel de Area da cidades
  float pib1, pib2; // variavel de PIB da cidade
  int ponto1, ponto2; // Variavel de pontos turisticos

  // Saudações para o usuário
  printf("===Bem-vindo ao Super Trunfo!===\n");
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

  printf("- Cadastro da Carta 01\n\n");
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

  // Saída de dados da carta 01

  printf("Informações da carta 01:\n\n");
  printf("Estado: %c\n Código: %s\n Nome da Cidade: %s\n População da Cidade: %d\n Área da Cidade: %f\n PIB da Cidade: %f\n Quantidade de Pontos Turisticos: %d\n\n", estado1, codigocarta1, nomecidade1, populacao1, area1, pib1, ponto1);
  
  printf("Informações da carta 02:\n\n");
  printf("Estado: %c\n Código: %s\n Nome da Cidade: %s\n População da Cidade: %d\n Área da Cidade: %f\n PIB da Cidade: %f\n Quantidade de Pontos Turisticos: %d\n\n", estado2, codigocarta2, nomecidade2, populacao2, area2, pib2, ponto2);

return 0;
} 
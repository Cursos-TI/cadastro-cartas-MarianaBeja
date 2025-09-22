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
  float poder1, poder2; // Variavel de poder das cartas

  // Saudações para o usuário
  printf("*** Bem-vindo ao Super Trunfo! ***\n");
  printf("Compare suas as cartas e vença no campo de batalha!!\n\n");

  // instruções do sistema
  printf("Insira a seguir as informações das cartas 01 e 02\n");

  // Entrada de dados da carta 01
  printf("- Cadastro da Carta 01\n\n");
  printf("Informe o estado da sua carta: \n");
  scanf("%c", &estado1);

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
  printf("\n- Cadastro da Carta 02\n\n");
  printf("Informe o estado da sua carta: \n");
  scanf(" %c", &estado2);

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
  densidade1 = (float)populacao1 / area1;
  percapita1 = (pib1 * 1000000000.0) / (float)populacao1;

  //Operações de Densidade e PIB per capita carta 01
  densidade2 = (float)populacao2 / area2;
  percapita2 = (pib2 * 1000000000.0) / (float)populacao2;

  // Calculo de poder das cartas

  poder1 = (float) populacao1 + area1 + pib1 + (float) ponto1 + (1/densidade1) + percapita1;
  poder2 = (float) populacao2 + area2 + pib2 + (float) ponto2 + (1/densidade2) + percapita2;

  // Saída de dados da carta 01
  printf("\nInformações da carta 01:\n\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n",codigocarta1);
  printf("Nome da Cidade: %s\n", nomecidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bi\n", pib1);
  printf("Pontos turísticos: %d\n", ponto1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", percapita1);
  printf("Super Poder de Carta: %.2f\n\n", poder1);

  // Saída de dados da carta 02
  printf("Informações da carta 02:\n\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Cidade: %s\n",codigocarta2);
  printf("Nome da Cidade: %s\n", nomecidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bi\n", pib2);
  printf("Pontos turísticos: %d\n", ponto2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", percapita2);
  printf("Super Poder de Carta: %.2f\n\n", poder2);


  // Comparação dos dados das cartas

  printf("*** Campo de Batalha ***\n");
  printf("Veja o resultado da batalha a seguir!\n\n");

  printf("População: A carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: A carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: A carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turisticos: A carta 1 venceu (%d)\n", ponto1 > ponto2);
  printf("Densidade Populacional: A carta 2 venceu (%d)\n", densidade1 < densidade2);
  printf("PIB per Capita: A carta 1 venceu (%d)\n", percapita1 > percapita2);
  printf("Super Poder: A carta 1 venceu (%d)\n", poder1 > poder2);

return 0;
} 
#include <stdio.h>

int main() {
  printf("Vamos começar! Crie sua primeira carta de super trunfo!\n");

  char estado1;
  printf("Insira APENAS UMA letra do seu primeiro estado: ");
  scanf(" %c", &estado1);
  char codigo1[4]; 
  printf("Insira o seu correspondente código: ");
  scanf("%s", codigo1);
  char nomeCidade1[50]; 
  printf("O nome da cidade agora: ");
  scanf("%s", nomeCidade1);
  unsigned long int populacao1;
  printf("A população total: ");
  scanf("%lu", &populacao1);
  float area1;
  printf("Sua área em KM: ");
  scanf("%f", &area1);
  float pib1;
  printf("Seu atual PIB: ");
  scanf("%f", &pib1);
  int pontosTuristicos1;
  printf("E sua quantia de pontos túristicos: ");
  scanf("%d", &pontosTuristicos1);

  float densidade1 = populacao1 / area1; // Calcula densidade
  float capita1 = pib1 / populacao1; // Calcula PIB per capita

  printf("Agora para a próxima carta.\n");

  char estado2;
  printf("Insira APENAS UMA letra para seu segundo estado: ");
  scanf(" %c", &estado2);
  char codigo2[6]; 
  printf("Insira o seu correspondente código: ");
  scanf("%s", codigo2);
  char nomeCidade2[50]; 
  printf("O nome da cidade agora: ");
  scanf("%s", nomeCidade2);
  unsigned long int populacao2;
  printf("A população total: ");
  scanf("%lu", &populacao2);
  float area2;
  printf("Sua área em KM: ");
  scanf("%f", &area2);
  float pib2;
  printf("Seu atual PIB: ");
  scanf("%f", &pib2);
  int pontosTuristicos2;
  printf("E sua quantia de pontos túristicos: ");
  scanf("%d", &pontosTuristicos2);

  float densidade2 = populacao2 / area2;
  float capita2 = pib2 / populacao2;

  printf("\nEssas são as cartas cadastradas:\n");

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", nomeCidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: %.2f\n", capita1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: %.2f\n", capita2);

  printf("\nComparação de cartas (Atributo: População)\n");
  printf("Carta 1 (%s) - %lu habitantes\n", nomeCidade1, populacao1);
  printf("Carta 2 (%s) - %lu habitantes\n", nomeCidade2, populacao2);

  if (populacao1 > populacao2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
  } else if (populacao2 > populacao1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
  } else {
      printf("Resultado: Empate!\n");
  }

  return 0;
}

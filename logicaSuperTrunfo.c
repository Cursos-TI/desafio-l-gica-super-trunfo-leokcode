#include <stdio.h>

int main() {
  // Área para definição das variáveis de ambas as cartas
    char estado1, carta1[4], cidade1[20], estado2, carta2[4], cidade2[20];
    int pontosturisticos1, pontosturisticos2;
    float area1, pib1, area2, pib2;
    float densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;
    unsigned long int  populacao1, populacao2;
    

  // Área para entrada de dados da Carta 1
    printf("Nome do estado (Uma letra maíuscula de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", &carta1);

    printf("Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): R$ ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);
    printf("\n");

  // Área para entrada de dados da Carta 2
    printf("Nome do estado (Uma letra maíuscula de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", &carta2);

    printf("Nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): R$ ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

  // Area para cálculos de densidade populacional, pib per capita
    densidadepopulacional1 = (float) populacao1 / area1;
    densidadepopulacional2 = (float) populacao2 / area2;

    pibpercapita1 = (float) (pib1 * 1000000000) / populacao1; // Aqui transformamos o pib em bilhão, antes de calcular o pib per capita.
    pibpercapita2 = (float) (pib2 * 1000000000) / populacao2; // Aqui transformamos o pib em bilhão, antes de calcular o pib per capita.
    
  // Área de comparação de cartas
    printf("\n=== Comparação de Cartas ===\n");
    printf("\nAtributo: População\n"); // Exibindo qual atributo será comparado.
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1); // Mostrando o atributo da Carta 1
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2); // Mostrando o atributo da Carta 2
    if (populacao1 > populacao2) { // Lógica para ver qual das cartas tem o melhor atributo
    printf("Carta 1 (%s) venceu!\n", cidade1); // Será exibido se a Carta 2 tiver o melhor atributo
    } else {
    printf("Carta 2 (%s) venceu!\n", cidade2); // Será exibido se a Carta 2 tiver o melhor atributo
    }

    printf("\nAtributo: Área em km²\n");
    printf("Carta 1 - %s: %.3f km²\n", cidade1, area1);
    printf("Carta 2 - %s: %.3f km²\n", cidade2, area2);
    if (area1 > area2) {
      printf("Carta 1 (%s) venceu!\n", cidade1);
    } else {
      printf("Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nAtributo: PIB\n");
    printf("Carta 1 - %s: R$ %.1f bilhões de reais\n", cidade1, pib1);
    printf("Carta 2 - %s: R$ %.1f bilhões de reais\n", cidade2, pib2);
    if (pib1 > pib2) {
      printf("Carta 1 (%s) venceu!\n", cidade1);
    } else {
      printf("Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nAtributo: Número de Pontos Turísticos\n");
    printf("Carta 1 - %s: %d\n", cidade1, pontosturisticos1);
    printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2) {
    printf("Carta 1 (%s) venceu!\n", cidade1);
    } else {
    printf("Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nAtributo: Densidade Populacional\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadepopulacional1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadepopulacional2);
    if (densidadepopulacional1 < densidadepopulacional2) {
    printf("Carta 1 (%s) venceu!\n", cidade1);
    } else {
    printf("Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nAtributo: PIB per Capita\n");
    printf("Carta 1 - %s: R$ %.2f reais\n", cidade1, pibpercapita1);
    printf("Carta 2 - %s: R$ %.2f reais\n", cidade2, pibpercapita2);
    if (pibpercapita1 > pibpercapita2) {
    printf("Carta 1 (%s) venceu!\n", cidade1);
    } else {
    printf("Carta 2 (%s) venceu!\n", cidade2);
    }

  return 0;

}

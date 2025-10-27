#include <stdio.h>

int main() {
  // Área para definição das variáveis de ambos os países
    char pais1[20], pais2[20];
    int pontosturisticos1, pontosturisticos2, opcao;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2;
    unsigned long int  populacao1, populacao2;
    

  // Área para entrada de dados do País 1
    printf("=-=-= CADASTRO DO PAÍS 1 =-=-=\n");
    printf("Nome do país: ");
    scanf("%s", &pais1);

    printf("Número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB: R$ ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);
    printf("\n");

  // Área para entrada de dados do País 2
    printf("=-=-= CADASTRO DO PAÍS 2 =-=-=\n");
    printf("Nome do país: ");
    scanf("%s", &pais2);

    printf("Número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: R$ ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);
    printf("\n");

  // Área para cálculo de densidade populacional
    densidadepopulacional1 = (float) populacao1 / area1;
    densidadepopulacional2 = (float) populacao2 / area2;

  // Área para o usuário ler e escolher o atributo para ser comparado.
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área em km²\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);
    printf("\n");

  // Área lógica para a comparação dos atributos dos países
    switch(opcao) {
    case 1:
        printf("Atributo escolhido: População\n");
        printf("%s: %lu de habitantes\n", pais1, populacao1);
        printf("%s: %lu de habitantes\n", pais2, populacao2);
        if (populacao1 > populacao2){
            printf("### %s venceu! ###", pais1);
        } else if (populacao1 < populacao2) {
            printf("### %s venceu! ###", pais2);
        } else {
            printf("### Empate ###");
        }
        break;
    case 2:
        printf("Atributo escolhido: Área em km²\n");
        printf("%s: %.3f km²\n", pais1, area1);
        printf("%s: %.3f km²\n", pais2, area2);
        if (area1 > area2){
            printf("### %s venceu! ###", pais1);
        } else if (area1 < area2) {
            printf("### %s venceu! ###", pais2);
        } else {
            printf("### Empate ###");
        }
        break;
    case 3:
        printf("Atributo escolhido: PIB\n");
        printf("%s: R$ %.1f \n", pais1, pib1);
        printf("%s: R$ %.1f \n", pais2, pib2);
        if (pib1 > pib2){
            printf("### %s venceu! ###", pais1);
        } else if (pib1 < pib2) {
            printf("### %s venceu! ###", pais2);
        } else {
            printf("### Empate ###");
        }
        break;
    case 4:
        printf("Atributo escolhido: Número de Pontos Turísticos\n");
        printf("%s: %d pontos turísticos\n", pais1, pontosturisticos1);
        printf("%s: %d pontos turísticos\n", pais2, pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2){
            printf("### %s venceu! ###", pais1);
        } else if (pontosturisticos1 < pontosturisticos2) {
            printf("### %s venceu! ###", pais2);
        } else {
            printf("### Empate ###");
        }
        break;
    case 5:
        printf("Atributo escolhido: Densidade Populacional\n");
        printf("%s: %.2f hab/km²\n", pais1, densidadepopulacional1);
        printf("%s: %.2f hab/km²\n", pais2, densidadepopulacional2);
        if (densidadepopulacional1 < densidadepopulacional2){
            printf("### %s venceu! ###", pais1);
        } else if (densidadepopulacional1 > densidadepopulacional2) {
            printf("### %s venceu! ###", pais2);
        } else {
            printf("### Empate ###");
        }
        break;
    default:
        printf("Opção inválida! Tente novamente.\n");
    }

  return 0;

}

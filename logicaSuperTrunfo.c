#include <stdio.h>

int main() {
  // Área para definição das variáveis (exceto char) de ambos os países
    int pontosturisticos1, pontosturisticos2, opcao, opcao2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2;
    unsigned long int  populacao1, populacao2;
    int vitoriaspais1 = 0, vitoriaspais2 = 0;
    
  // Pré-cadastro do País 1
    char pais1[20] = "Brasil";
    populacao1 = 213421037;
    area1 = 8510417.77;
    pib1 = 11700000000000;
    pontosturisticos1 = 335;
 
  // Pré-cadastro do País 2
    char pais2[20] = "Argentina";
    populacao2 = 8510417.77;
    area2 = 2780000;
    pib2 = 631100000000;
    pontosturisticos2 = 100;

  // Área para cálculo de densidade populacional de ambos os países
    densidadepopulacional1 = (float) populacao1 / area1;
    densidadepopulacional2 = (float) populacao2 / area2;
    

  // Área para mostrar ao usuário os dados do País 1
    printf("=-=-= PAÍS 1 =-=-=\n");
    printf("Nome do país: %s\n", pais1);
    printf("População: %lu de pessoas\n", populacao1);
    printf("Área: %.0f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);
    printf("\n"); // Vai fazer uma linha de código vazia para separar os dados e ficar mais legível.

  // Área para mostrar ao usuário os dados do País 2
    printf("=-=-= PAÍS 2 =-=-=\n");
    printf("Nome do país: %s\n", pais2);
    printf("População: %lu de pessoas\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("\n");

  // Área para o usuário ler e escolher o primeiro atributo para ser comparado.
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área em km²\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);
    printf("\n");

  // Área para o usuário ler e escolher o segundo atributo para ser comparado.
    printf("Escolha o segundo atributo para comparar:\n");
  /*Uso do operador ternário para deletar ou exibir os atributos disponíveis
  de acordo com a opção anterior escolhida.*/ 
    opcao != 1 ? printf("1 - População\n") : printf(""); 
    opcao != 2 ? printf("2 - Área em km²\n") : printf("");
    opcao != 3 ? printf("3 - PIB\n") : printf("");
    opcao != 4 ? printf("4 - Número de Pontos Turísticos\n") : printf("");
    opcao != 5 ? printf("5 - Densidade Populacional\n")  : printf("");
    printf("Sua opção: ");
    scanf("%d", &opcao2);
    printf("\n");

    // Área lógica para a comparação do primeiro atributo escolhido
    switch(opcao) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %lu de habitantes\n", pais1, populacao1);
            printf("%s: %lu de habitantes\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                vitoriaspais1 += 1; // Adiciona uma unidade se o País 1 vencer no atributo
                printf("### %s venceu! ###\n", pais1);
            } else if (populacao1 < populacao2) {
                vitoriaspais2 += 1; // Adiciona uma unidade se o País 2 vencer no atributo
                printf("### %s venceu! ###\n", pais2);
            } else {
                printf("### Empate! ###\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área em km²\n");
            printf("%s: %.3f km²\n", pais1, area1);
            printf("%s: %.3f km²\n", pais2, area2);
            if (area1 > area2) {
                vitoriaspais1 += 1; // Adiciona uma unidade se o País 1 vencer no atributo
                printf("### %s venceu! ###\n", pais1);
            } else if (area1 < area2) {
                vitoriaspais2 += 1; // Adiciona uma unidade se o País 2 vencer no atributo
                printf("### %s venceu! ###\n", pais2);
            } else {
                printf("### Empate! ###\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: R$ %.2f \n", pais1, pib1);
            printf("%s: R$ %.2f \n", pais2, pib2);
            if (pib1 > pib2) {
                vitoriaspais1 += 1; // Adiciona uma unidade se o País 1 vencer no atributo
                printf("### %s venceu! ###\n", pais1);
            } else if (pib1 < pib2) {
                vitoriaspais2 += 1; // Adiciona uma unidade se o País 2 vencer no atributo
                printf("### %s venceu! ###\n", pais2);
            } else {
                printf("### Empate! ###\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Número de Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", pais1, pontosturisticos1);
            printf("%s: %d pontos turísticos\n", pais2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
                vitoriaspais1 += 1; // Adiciona uma unidade se o País 1 vencer no atributo
                printf("### %s venceu! ###\n", pais1);
            } else if (pontosturisticos1 < pontosturisticos2) {
                vitoriaspais2 += 1; // Adiciona uma unidade se o País 2 vencer no atributo
                printf("### %s venceu! ###\n", pais2);
            } else {
                printf("### Empate! ###\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", pais1, densidadepopulacional1);
            printf("%s: %.2f hab/km²\n", pais2, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2) {
                vitoriaspais1 += 1; // Adiciona uma unidade se o País 1 vencer no atributo
                printf("### %s venceu! ###\n", pais1);
            } else if (densidadepopulacional1 > densidadepopulacional2) {
                vitoriaspais2 += 1; // Adiciona uma unidade se o País 2 vencer no atributo
                printf("### %s venceu! ###\n", pais2);
            } else {
                printf("### Empate! ###\n");
            }
            break;

        default:
            printf("Atributo inválido! Tente novamente.\n");
    } printf("\n");

  // Área lógica para a comparação do segundo atributo escolhido
    switch(opcao2) {
        case 1:
            if (opcao != 1) { /* Só exibirá e calculará o resultado se o atributo digitado
                                for diferente do primeiro atributo escolhido*/
                printf("Atributo escolhido: População\n");
                printf("%s: %lu de habitantes\n", pais1, populacao1);
                printf("%s: %lu de habitantes\n", pais2, populacao2);
                if (populacao1 > populacao2) {
                    vitoriaspais1 += 1; // Adiciona uma unidade se o País 1 vencer no atributo
                    printf("### %s venceu! ###\n", pais1);
                } else if (populacao1 < populacao2) {
                    vitoriaspais2 += 1; // Adiciona uma unidade se o País 2 vencer no atributo
                    printf("### %s venceu! ###\n", pais2);
                } else {
                    printf("### Empate! ###\n");
                }
            } else {
                printf("Atributo inválido! Tente novamente.\n");
            }
            break;

        case 2:
            if (opcao != 2) {
                printf("Atributo escolhido: Área em km²\n");
                printf("%s: %.3f km²\n", pais1, area1);
                printf("%s: %.3f km²\n", pais2, area2);
                if (area1 > area2) {
                    vitoriaspais1 += 1; // Adiciona uma unidade se o País 1 vencer no atributo
                    printf("### %s venceu! ###\n", pais1);
                } else if (area1 < area2) {
                    vitoriaspais2 += 1; // Adiciona uma unidade se o País 2 vencer no atributo
                    printf("### %s venceu! ###\n", pais2);
                } else {
                    printf("### Empate! ###\n");
                }
            } else {
                printf("Atributo inválido! Tente novamente.\n");
            }
            break;

        case 3:
            if (opcao != 3) {
                printf("Atributo escolhido: PIB\n");
                printf("%s: R$ %.2f \n", pais1, pib1);
                printf("%s: R$ %.2f \n", pais2, pib2);
                if (pib1 > pib2) {
                    vitoriaspais1 += 1; // Adiciona uma unidade se o País 1 vencer no atributo
                    printf("### %s venceu! ###\n", pais1);
                } else if (pib1 < pib2) {
                    vitoriaspais2 += 1; // Adiciona uma unidade se o País 2 vencer no atributo
                    printf("### %s venceu! ###\n", pais2);
                } else {
                    printf("### Empate! ###\n");
                }
            } else {
                printf("Atributo inválido! Tente novamente.\n");
            }
            break;

        case 4:
            if (opcao != 4) {
                printf("Atributo escolhido: Número de Pontos Turísticos\n");
                printf("%s: %d pontos turísticos\n", pais1, pontosturisticos1);
                printf("%s: %d pontos turísticos\n", pais2, pontosturisticos2);
                if (pontosturisticos1 > pontosturisticos2) {
                    vitoriaspais1 += 1;
                    printf("### %s venceu! ###\n", pais1);
                } else if (pontosturisticos1 < pontosturisticos2) {
                    vitoriaspais2 += 1;
                    printf("### %s venceu! ###\n", pais2);
                } else {
                    printf("### Empate! ###\n");
                }
            } else {
                printf("Atributo inválido! Tente novamente.\n");
            }
            break;

        case 5:
            if (opcao != 5){
                printf("Atributo escolhido: Densidade Populacional\n");
                printf("%s: %.2f hab/km²\n", pais1, densidadepopulacional1);
                printf("%s: %.2f hab/km²\n", pais2, densidadepopulacional2);
                if (densidadepopulacional1 < densidadepopulacional2) {
                    vitoriaspais1 += 1;
                    printf("### %s venceu! ###\n", pais1);
                } else if (densidadepopulacional1 > densidadepopulacional2) {
                    vitoriaspais2 += 1;
                    printf("### %s venceu! ###\n", pais2);
                } else {
                    printf("### Empate! ###\n");
                }
            } else {
                printf("Atributo inválido! Tente novamente.\n");
            }
            break;

        default:
            printf("Atributo inválido! Tente novamente.\n");
    } printf("\n");

  // Área para mostrar os pontos de cada país e o vencedor final.
    printf("### RESULTADO FINAL ###\n");
    printf("%s: %d\n", pais1, vitoriaspais1);
    printf("%s: %d\n", pais2, vitoriaspais2);

  // Lógica para determinar qual país tem mais vitórias ou se empataram.
    if (vitoriaspais1 > vitoriaspais2) {
        printf("### %s VENCEU! ###\n", pais1);     
    } else if (vitoriaspais1 < vitoriaspais2) {
        printf("### %s VENCEU! ###\n", pais2);
    } else {
        printf("### EMPATE! ###\n");
    }
    
    return 0;

}

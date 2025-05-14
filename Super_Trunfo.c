#include <stdio.h>

int main() {
    char estado1[50], codigo1[10], cidade1[50];
    unsigned long int populacao1; 
    int pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;
    float super_poder1;

    // Entrada de dados para a primeira carta
    printf("\n*** Bem Vindo ao Super Trunfo ***\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1); // Lê o nome completo

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo das métricas
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    super_poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 * (1.0f / densidade_populacional1);



    // Exibição dos resultados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);


    // Segunda carta
    char estado2[50], codigo2[10], cidade2[50];
    unsigned long int populacao2; 
    int pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;
    float super_poder2;

    printf("\nEstado: ");
    scanf("%s", estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo das métricas
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) (pib2 * 1000000000) / populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 * (1.0f / densidade_populacional2);

    // Exibição dos resultados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    //comparação de cartas//

    //saida de dados da comparação das cartas
    printf("\n*** Comparação das Cartas ***\n");

    // População
    printf("\nComparação por População:\n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
    if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("Resultado: Empate!\n");
    }

    // Área
    printf("\nComparação por Área:\n");
    printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
    if (area1 > area2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (area2 > area1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("Resultado: Empate!\n");
    }

    // PIB
    printf("\nComparação por PIB:\n");
    printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
    printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);
    if (pib1 > pib2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("Resultado: Empate!\n");
    }

    // Pontos Turísticos
    printf("\nComparação por Pontos Turísticos:\n");
    printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
    printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
    if (pontos_turisticos1 > pontos_turisticos2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pontos_turisticos2 > pontos_turisticos1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("Resultado: Empate!\n");
    }

    // Densidade Populacional (MENOR VENCE)
    printf("\nComparação por Densidade Populacional (menor vence):\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional2);
    if (densidade_populacional1 < densidade_populacional2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade_populacional2 < densidade_populacional1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("Resultado: Empate!\n");
    }

    // PIB per Capita
    printf("\nComparação por PIB per Capita:\n");
    printf("Carta 1 - %s: R$ %.2f\n", cidade1, pib_per_capita1);
    printf("Carta 2 - %s: R$ %.2f\n", cidade2, pib_per_capita2);
    if (pib_per_capita1 > pib_per_capita2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("Resultado: Empate!\n");
    }

    // Super Poder
    printf("\nComparação por Super Poder:\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, super_poder1);
    printf("Carta 2 - %s: %.2f\n", cidade2, super_poder2);
    if (super_poder1 > super_poder2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (super_poder2 > super_poder1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
    printf("Resultado: Empate!\n");
    }




    return 0;
}

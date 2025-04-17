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

    printf("População: Carta  Venceu: %d\n", populacao1 > populacao2);
    printf("Área: Carta  Venceu: %.1f\n", area1 > area2);
    printf("PIB: Carta  Venceu: %.1f\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta  Venceu: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta  Venceu: %.1f\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta  Venceu: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta  Venceu: %.1f\n", super_poder1 > super_poder2);




    return 0;
}

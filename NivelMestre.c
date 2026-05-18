#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // ===== ENTRADA CARTA 1 =====
    printf("Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);

    // ===== ENTRADA CARTA 2 =====
    printf("\nCarta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // ===== COMPARAÇÕES =====
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos1 > pontos2);

    printf("Densidade Populacional: %d\n", densidade1 < densidade2);

    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
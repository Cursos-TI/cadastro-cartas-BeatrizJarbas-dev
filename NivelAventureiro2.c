#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================
    char pais1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8516000;
    float pib1 = 2200;
    int pontos1 = 60;
    float densidade1 = populacao1 / area1;

    // =========================
    // CARTA 2
    // =========================
    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780000;
    float pib2 = 630;
    int pontos2 = 40;
    float densidade2 = populacao2 / area2;

    int escolha;

    // =========================
    // MENU
    // =========================
    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("\n=== RESULTADO ===\n");

    // =========================
    // SWITCH (menu)
    // =========================
    switch (escolha) {

        case 1: // População
            printf("Atributo: Populacao\n\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Area\n\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n\n", pais2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turisticos\n\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n\n", pais2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade (regra invertida)
            printf("Atributo: Densidade Demografica\n\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n\n", pais2, densidade2);

            // regra especial: MENOR vence
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
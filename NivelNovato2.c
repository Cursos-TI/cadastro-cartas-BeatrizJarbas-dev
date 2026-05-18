#include <stdio.h>

// Programa Super Trunfo - comparação simples entre 2 cartas

int main() {

    // =========================
    // CARTA 1
    // =========================
    char estado1[50] = "SP";
    char codigo1[10] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 700.0;
    int pontos1 = 50;

    // =========================
    // CARTA 2
    // =========================
    char estado2[50] = "RJ";
    char codigo2[10] = "B01";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.0;
    float pib2 = 300.0;
    int pontos2 = 40;

    // =========================
    // CÁLCULOS
    // =========================

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // =========================
    // ATRIBUTO ESCOLHIDO
    // (fixo no código)
    // =========================

    printf("=== COMPARACAO DE CARTAS ===\n");
    printf("Atributo escolhido: Populacao\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    // =========================
    // COMPARAÇÃO (IF-ELSE)
    // =========================

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
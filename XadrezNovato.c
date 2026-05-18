#include <stdio.h>

int main() {

    int i;

    // =========================
    // TORRE - usa FOR
    // 5 casas para a direita
    // =========================
    printf("=== MOVIMENTO DA TORRE ===\n");

    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // =========================
    // BISPO - usa WHILE
    // 5 casas na diagonal
    // Cima + Direita
    // =========================
    printf("\n=== MOVIMENTO DO BISPO ===\n");

    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    // =========================
    // RAINHA - usa DO WHILE
    // 8 casas para a esquerda
    // =========================
    printf("\n=== MOVIMENTO DA RAINHA ===\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}

#include <stdio.h>

int main() {

    int i;

    // =========================
    // TORRE - FOR
    // =========================
    printf("=== TORRE ===\n");

    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // =========================
    // BISPO - WHILE
    // =========================
    printf("\n=== BISPO ===\n");

    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    // =========================
    // RAINHA - DO WHILE
    // =========================
    printf("\n=== RAINHA ===\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    // =========================
    // CAVALO - LOOPS ANINHADOS
    // =========================
    printf("\n=== CAVALO ===\n");

    int baixo = 2;
    int esquerda = 1;

    // loop externo (for) -> movimento principal
    for (i = 1; i <= baixo; i++) {

        // loop interno (while) só para demonstrar aninhamento
        int j = 1;

        while (j <= 1) {
            printf("Baixo\n");
            j++;
        }
    }

    // movimento final do L (1 vez para esquerda)
    for (i = 1; i <= esquerda; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
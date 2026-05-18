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

    int op1, op2;

    // =========================
    // MENU 1
    // =========================
    printf("=== SUPER TRUNFO FINAL ===\n\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &op1);

    // =========================
    // MENU 2 (DINÂMICO)
    // =========================
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    if (op1 != 1) printf("1 - Populacao\n");
    if (op1 != 2) printf("2 - Area\n");
    if (op1 != 3) printf("3 - PIB\n");
    if (op1 != 4) printf("4 - Pontos Turisticos\n");
    if (op1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &op2);

    if (op1 == op2) {
        printf("\nErro: voce escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // =========================
    // VALORES DO ATRIBUTO 1
    // =========================
    float v1_c1 = 0, v1_c2 = 0;
    float v2_c1 = 0, v2_c2 = 0;

    char nome1[50], nome2[50];

    // =========================
    // ATRIBUTO 1 (SWITCH)
    // =========================
    switch (op1) {
        case 1:
            v1_c1 = populacao1;
            v1_c2 = populacao2;
            sprintf(nome1, "Populacao");
            break;

        case 2:
            v1_c1 = area1;
            v1_c2 = area2;
            sprintf(nome1, "Area");
            break;

        case 3:
            v1_c1 = pib1;
            v1_c2 = pib2;
            sprintf(nome1, "PIB");
            break;

        case 4:
            v1_c1 = pontos1;
            v1_c2 = pontos2;
            sprintf(nome1, "Pontos Turisticos");
            break;

        case 5:
            v1_c1 = densidade1;
            v1_c2 = densidade2;
            sprintf(nome1, "Densidade");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // =========================
    // ATRIBUTO 2 (SWITCH)
    // =========================
    switch (op2) {
        case 1:
            v2_c1 = populacao1;
            v2_c2 = populacao2;
            sprintf(nome2, "Populacao");
            break;

        case 2:
            v2_c1 = area1;
            v2_c2 = area2;
            sprintf(nome2, "Area");
            break;

        case 3:
            v2_c1 = pib1;
            v2_c2 = pib2;
            sprintf(nome2, "PIB");
            break;

        case 4:
            v2_c1 = pontos1;
            v2_c2 = pontos2;
            sprintf(nome2, "Pontos Turisticos");
            break;

        case 5:
            v2_c1 = densidade1;
            v2_c2 = densidade2;
            sprintf(nome2, "Densidade");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // =========================
    // REGRAS DE COMPARAÇÃO
    // =========================

    float soma1 = v1_c1 + v2_c1;
    float soma2 = v1_c2 + v2_c2;

    // =========================
    // RESULTADO
    // =========================

    printf("\n=== RESULTADO FINAL ===\n\n");

    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n\n", pais2);

    printf("Atributos escolhidos:\n");
    printf("1 - %s\n", nome1);
    printf("2 - %s\n\n", nome2);

    printf("%s: %.2f | %.2f\n", pais1, v1_c1, v2_c1);
    printf("%s: %.2f | %.2f\n\n", pais2, v1_c2, v2_c2);

    printf("Soma %s: %s = %.2f\n", pais1, pais1, soma1);
    printf("Soma %s: %s = %.2f\n\n", pais2, pais2, soma2);

    // =========================
    // VENCEDOR (TERNÁRIO)
    // =========================

    (soma1 > soma2)
        ? printf("Vencedor: %s!\n", pais1)
        : (soma2 > soma1)
            ? printf("Vencedor: %s!\n", pais2)
            : printf("Empate!\n");

    return 0;
}
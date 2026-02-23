#include <stdio.h>

int main() {

    // ===== CARTA 1 - SÃO PAULO =====
    char estado1 = 'S';
    char nomeCidade1[] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // ===== CARTA 2 - RIO DE JANEIRO =====
    char estado2 = 'R';
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;


    // ===== EXIBINDO CARTA 1 =====
    printf("=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // ===== EXIBINDO CARTA 2 =====
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

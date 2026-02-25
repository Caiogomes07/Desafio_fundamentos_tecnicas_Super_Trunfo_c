#include <stdio.h>

int main() {

    // ============================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ============================

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];

    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;


    // ============================
    // ENTRADA - CARTA 1
    // ============================

    printf("=== CADASTRO CARTA 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta: ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // ============================
    // ENTRADA - CARTA 2
    // ============================

    printf("\n=== CADASTRO CARTA 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta: ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // ============================
    // CÁLCULOS
    // ============================

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 +
                  pibPerCapita1 + (1.0 / densidade1);

    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 +
                  pibPerCapita2 + (1.0 / densidade2);


    // ============================
    // EXIBIÇÃO DAS COMPARAÇÕES
    // ============================

    printf("\n=== COMPARACAO DE CARTAS ===\n\n");

    // População
    if (populacao1 == populacao2)
        printf("Populacao: Empate!\n");
    else
        printf("Populacao: Carta %d venceu\n",
               populacao1 > populacao2 ? 1 : 2);

    // Área
    if (area1 == area2)
        printf("Area: Empate!\n");
    else
        printf("Area: Carta %d venceu\n",
               area1 > area2 ? 1 : 2);

    // PIB
    if (pib1 == pib2)
        printf("PIB: Empate!\n");
    else
        printf("PIB: Carta %d venceu\n",
               pib1 > pib2 ? 1 : 2);

    // Pontos turísticos
    if (pontosTuristicos1 == pontosTuristicos2)
        printf("Pontos Turisticos: Empate!\n");
    else
        printf("Pontos Turisticos: Carta %d venceu\n",
               pontosTuristicos1 > pontosTuristicos2 ? 1 : 2);

    // Densidade (menor vence)
    if (densidade1 == densidade2)
        printf("Densidade Populacional: Empate!\n");
    else
        printf("Densidade Populacional: Carta %d venceu\n",
               densidade1 < densidade2 ? 1 : 2);

    // PIB per capita
    if (pibPerCapita1 == pibPerCapita2)
        printf("PIB per Capita: Empate!\n");
    else
        printf("PIB per Capita: Carta %d venceu\n",
               pibPerCapita1 > pibPerCapita2 ? 1 : 2);

    // Super Poder
    if (superPoder1 == superPoder2)
        printf("Super Poder: Empate!\n");
    else
        printf("Super Poder: Carta %d venceu\n",
               superPoder1 > superPoder2 ? 1 : 2);

    return 0;
}

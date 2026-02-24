#include <stdio.h>

int main() {

    // ============================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ============================

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;


    // ============================
    // ENTRADA - CARTA 1
    // ============================

    printf("=== CADASTRO CARTA 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

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
    scanf("%s", codigo2);

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

    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    // Super Poder (inverso da densidade)
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 +
                  pibPerCapita1 + (1.0 / densidade1);

    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 +
                  pibPerCapita2 + (1.0 / densidade2);


    // ============================
    // COMPARAÇÕES (1 = Carta 1 vence, 0 = Carta 2 vence)
    // ============================

    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontos = pontosTuristicos1 > pontosTuristicos2;
    int resultadoDensidade = densidade1 < densidade2; // menor vence
    int resultadoPIBperCapita = pibPerCapita1 > pibPerCapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;


    // ============================
    // EXIBIÇÃO DOS RESULTADOS
    // ============================

    printf("\n=== COMPARACAO DE CARTAS ===\n\n");

    printf("Populacao: Carta %d venceu (%d)\n", 
           resultadoPopulacao ? 1 : 2, resultadoPopulacao);

    printf("Area: Carta %d venceu (%d)\n", 
           resultadoArea ? 1 : 2, resultadoArea);

    printf("PIB: Carta %d venceu (%d)\n", 
           resultadoPIB ? 1 : 2, resultadoPIB);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 
           resultadoPontos ? 1 : 2, resultadoPontos);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           resultadoDensidade ? 1 : 2, resultadoDensidade);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           resultadoPIBperCapita ? 1 : 2, resultadoPIBperCapita);

    printf("Super Poder: Carta %d venceu (%d)\n", 
           resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);

    return 0;
}

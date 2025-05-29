#include <stdio.h>

int main() {

    char estado, estado2;
    char codigoCarta[4], codigoCarta2[4];
    char cidade[50], cidade2[50]; // aumentei para 50 pra nomes maiores
    unsigned long int populacao, populacao2; // agora unsigned long int
    int pontosTuristicos, pontosTuristicos2;
    float areaCidade, areaCidade2;
    float pib, pib2;

    float densidadePopulacional, densidadePopulacional2;
    float pibPerCapita, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("Seja bem-vindo ao Super Trunfo - Nivel Mestre!\n\n");

    // Entrada Carta 1
    printf("Digite os dados da carta 01 \n");
    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Codigo da carta: ");
    scanf("%3s", codigoCarta);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Populacao: ");
    scanf("%lu", &populacao);

    printf("Area (km²): ");
    scanf("%f", &areaCidade);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Entrada Carta 2
    printf("\nDigite os dados da carta 02 \n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%3s", codigoCarta2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &areaCidade2);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos densidade e PIB per capita
    densidadePopulacional = populacao / areaCidade;
    densidadePopulacional2 = populacao2 / areaCidade2;

    pibPerCapita = (pib * 1e9) / populacao;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao + areaCidade + pib + pontosTuristicos + pibPerCapita + (1.0f / densidadePopulacional);
    superPoder2 = (float)populacao2 + areaCidade2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);


    printf("\n===============================\n");
    printf("Carta 01\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km²\n", areaCidade);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações e resultados
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao > populacao2 ? 1 : 0);
    printf("Area: Carta 1 venceu (%d)\n", areaCidade > areaCidade2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2 ? 1 : 0);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos > pontosTuristicos2 ? 1 : 0);


    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional < densidadePopulacional2 ? 1 : 0);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}

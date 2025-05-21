#include <stdio.h>

int main() {

    char estado;
    char codigoCarta[4]; //utilizado 4 para que apresente corretamente o A01 por exemplo
    char cidade[20]; //utilizado 20 apenas para em casos de nomes de cidades maiores 
    int populacao, pontosTuristicos;
    float areaCidade, pib;

    // reaproveitei a ideia de nomes das variáveis e adicionei o 2 para armazenar os dados da carta 02

    char estado2;
    char codigoCarta2[4];
    char cidade2[20];
    int populacao2, pontosTuristicos2;
    float areaCidade2, pib2;

    printf("Seja bem-vindo ao Super Trunfo!\n");
    printf("Digite os dados da carta 01 \n"); //inserida uma frase de apresentação

    printf("Digite qual é o estado da sua carta: \n");
    scanf(" %c", &estado); //necessário usar %c pois estava dando problema ao armazenar apenas uma letra

    printf("Digite o código da sua carta: \n");
    scanf("%s", codigoCarta);

    printf("Digite qual é a cidade da sua carta: \n");
    scanf("%s", cidade);

    printf("Informe a população da sua cidade: \n");
    scanf("%i", &populacao);

    printf("Informe a área da sua cidade: \n");
    scanf("%f", &areaCidade);

    printf("Informe o PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("Informe quantos pontos turísticos há na sua cidade: \n");
    scanf("%i", &pontosTuristicos);

    printf("Os dados da carta 01 foram salvos.\n");

    //inicio das informações da carta 02
    
    printf("Digite os dados da carta 02\n");

    printf("Digite qual é o estado da sua carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da sua carta: \n");
    scanf("%s", codigoCarta2);

    printf("Digite qual é a cidade da sua carta: \n");
    scanf("%s", cidade2);

    printf("Informe a população da sua cidade: \n");
    scanf("%i", &populacao2);

    printf("Informe a área da sua cidade: \n");
    scanf("%f", &areaCidade2);

    printf("Informe o PIB da sua cidade: \n");
    scanf("%f", &pib2);

    printf("Informe quantos pontos turísticos há na sua cidade: \n");
    scanf("%i", &pontosTuristicos2);

    //Abaixo está a saída de dados de ambas as cartas

    printf("Carta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %i \n", populacao);
    printf("Área: %f km² \n", areaCidade);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %i\n\n", pontosTuristicos);


    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %i \n", populacao2);
    printf("Área: %f km² \n", areaCidade2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);
    printf("Esses foram os dados coletados das cartas!");



    return 0;
}

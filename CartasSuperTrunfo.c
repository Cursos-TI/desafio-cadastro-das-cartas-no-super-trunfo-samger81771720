#include <stdio.h>

int main(){

    // Declarando as variáveis para a primeira carta:
    char estado1;
    char codigoDaCarta1[10];
    char nomeDaCidade1[30];
    unsigned long int populacao1;
    int numeroPontosTuristicos1;
    float areaKm2_1, 
          pib1, 
          densidadePopulacional1, 
          pib_PerCapita1,
          superPoder1;
    
    // Declarando as variáveis para a segunda carta:
    char estado2;
    char codigoDaCarta2[10];
    char nomeDaCidade2[30];
    unsigned long int populacao2;
    int numeroPontosTuristicos2;
    float areaKm2_2, 
          pib2, 
          densidadePopulacional2, 
          pib_PerCapita2,
          superPoder2;

    // Coletando dados da primeira carta
    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf("Dentre os 8 estados existentes, representados pelas letras de 'A' à 'H', digite a letra do estado desejado da primeira carta:\n");
    scanf(" %c", &estado1);

    printf("Digite apenas o número que irá compor o código da carta (ex: 01, 02, 03, 04):\n");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areaKm2_1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &numeroPontosTuristicos1);

    // Coletando dados da segunda carta
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
    printf("Dentre os 8 estados existentes, representados pelas letras de 'A' à 'H', digite a letra do estado desejado da segunda carta:\n");
    scanf(" %c", &estado2);

    printf("Digite apenas o número que irá compor o código da carta (ex: 01, 02, 03, 04):\n");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areaKm2_2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &numeroPontosTuristicos2);

    // Calculando a densidade populacional de cada cidade
    densidadePopulacional1 = (float)populacao1 / areaKm2_1;
    densidadePopulacional2 = (float)populacao2 / areaKm2_2;

    // Calculando o PIB de cada cidade:
    pib_PerCapita1 = pib1 / (float)populacao1;
    pib_PerCapita2 = pib2 / (float)populacao2;

    // Calculando o super poder de cada carta:
    superPoder1 = (float)populacao1 + 
                   areaKm2_1 + pib1 + 
                   (float)numeroPontosTuristicos1 + 
                   pib_PerCapita1 + 
                   (1.0 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + 
                   areaKm2_2 + 
                   pib2 + 
                   (float)numeroPontosTuristicos2 + 
                   pib_PerCapita2 + 
                   (1.0 / densidadePopulacional2);

    // Exibindo os dados de ambas as cartas
    printf("\n=== CARTAS CADASTRADAS ===\n");
    
    // Imprimindo os dados da primeira carta:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaKm2_1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pib_PerCapita1);
    printf("Super poder: %.2f\n", superPoder1);

    // Imprimindo os dados da segunda carta:
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2_2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pib_PerCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    // Comparando atributos das cartas:
    printf("\nComparação de cartas:\n");
    if (populacao1 > populacao2){
        printf("População: A carta 1 foi a vencedora!\n");
    } else if(populacao1 < populacao2){
        printf("População: A carta 2 foi a vencedora!\n");
    } else{
        printf("População: Houve um empate!\n");
    }

    if(areaKm2_1 > areaKm2_2){
        printf("Área: A carta 1 foi a vencedora!\n");
    } else if (areaKm2_1 < areaKm2_2) {
        printf("Área: A carta 2 foi a vencedora!\n");
    } else{
        printf("Área: Houve um empate!\n");
    }

    if(pib1 > pib2){
        printf("PIB: A carta 1 foi a vencedora!\n");
    } else if(pib1 < pib2){
        printf("PIB: A carta 2 foi a vencedora!\n");
    } else{
        printf("PIB: Houve um empate!\n");
    }

    if(numeroPontosTuristicos1 > numeroPontosTuristicos2){
        printf("Pontos Turísticos: A carta 1 foi a vencedora!\n");
    } else if(numeroPontosTuristicos1 < numeroPontosTuristicos2){
        printf("Pontos Turísticos: A carta 2 foi a vencedora!\n");
    } else{
        printf("Pontos Turísticos: Houve um empate!\n");
    }

    if(densidadePopulacional1 > densidadePopulacional2){
        printf("Densidade Populacional: A carta 1 foi a vencedora!\n");
    } else if(densidadePopulacional1 < densidadePopulacional2){
        printf("Densidade Populacional: A carta 2 foi a vencedora!\n");
    } else{
        printf("Densidade Populacional: Houve um empate!\n");
    }

    if(pib_PerCapita1 > pib_PerCapita2){
        printf("PIB per Capita: A carta 1 foi a vencedora!\n");
    } else if(pib_PerCapita1 < pib_PerCapita2){
        printf("PIB per Capita: A carta 2 foi a vencedora!\n");
    } else{
        printf("PIB per Capita: Houve um empate!\n");
    }

    if(superPoder1 > superPoder2){
        printf("Super Poder: A carta 1 foi a vencedora!\n\n");
    } else if(superPoder1 < superPoder2){
        printf("Super Poder: A carta 2 foi a vencedora!\n\n");
    } else{
        printf("Super Poder: Houve um empate!\n\n");
    }

    return 0;
}
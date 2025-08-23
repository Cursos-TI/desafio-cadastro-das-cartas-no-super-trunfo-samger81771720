#include <stdio.h>

// Função para exibir a carta vencedora:
void exibirVencedor(
    int numeroCarta,
    char estado,
    char codigo[],
    char cidade[],
    char atributo[],
    float valor1,
    float valor2
){
    printf("\n=== RESULTADO DA DISPUTA ===\n");
    printf("Carta vencedora: Carta %d\n", numeroCarta);
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("Atributo utilizado: %s\n", atributo);
    printf("Valores comparados: Carta 1 = %.2f | Carta 2 = %.2f\n", valor1, valor2);
}

int main(){

    // Declarando as variáveis para a primeira carta:
    char estado1;
    char codigoDaCarta1[10];
    char nomeDaCidade1[30];
    unsigned long int populacao1;
    int numeroPontosTuristicos1;
    float areaKm2_1, pib1, densidadePopulacional1, pib_PerCapita1, superPoder1;
    
    // Declarando as variáveis para a segunda carta:
    char estado2;
    char codigoDaCarta2[10];
    char nomeDaCidade2[30];
    unsigned long int populacao2;
    int numeroPontosTuristicos2;
    float areaKm2_2, pib2, densidadePopulacional2, pib_PerCapita2, superPoder2;
    
    // Atributo de competição
    int opcao;

    // Coletando dados da primeira carta
    printf("\n=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o número do código da carta (ex: 01, 02, 03): ");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade1); 

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &areaKm2_1);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos1);

    // Coletando dados da segunda carta
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o número do código da carta (ex: 01, 02, 03): ");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2); 

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &areaKm2_2);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);

    // Calculando atributos derivados
    densidadePopulacional1 = (float)populacao1 / areaKm2_1;
    densidadePopulacional2 = (float)populacao2 / areaKm2_2;

    pib_PerCapita1 = pib1 / (float)populacao1;
    pib_PerCapita2 = pib2 / (float)populacao2;

    superPoder1 = (float)populacao1 + areaKm2_1 + pib1 + numeroPontosTuristicos1 + pib_PerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + areaKm2_2 + pib2 + numeroPontosTuristicos2 + pib_PerCapita2 + (1.0 / densidadePopulacional2);

    // Exibindo as cartas cadastradas
    printf("\n=== CARTAS CADASTRADAS ===\n");
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigoDaCarta1);
    printf("Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaKm2_1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pib_PerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigoDaCarta2);
    printf("Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2_2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pib_PerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    // Escolha do atributo
    printf("\nEscolha um atributo para competir:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB per Capita\n");
    printf("4 - Nº de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Super Poder\n");
    scanf("%d", &opcao);
    
    // Comparação
    switch (opcao){
        case 1:
            if (populacao1 > populacao2)
                exibirVencedor(1, estado1, codigoDaCarta1, nomeDaCidade1,"População", populacao1, populacao2);
            else if(populacao1 < populacao2)
                exibirVencedor(2, estado2, codigoDaCarta2, nomeDaCidade2,"População", populacao1, populacao2);
            else
                printf("População: Houve um empate!\n");
            break;

        case 2:
            if(areaKm2_1 > areaKm2_2)
                exibirVencedor(1, estado1, codigoDaCarta1, nomeDaCidade1,"Área", areaKm2_1, areaKm2_2);
            else if(areaKm2_1 < areaKm2_2)
                exibirVencedor(2, estado2, codigoDaCarta2, nomeDaCidade2,"Área", areaKm2_1, areaKm2_2);
            else
                printf("Área: Houve um empate!\n");
            break;

        case 3:
            if(pib_PerCapita1 > pib_PerCapita2)
                exibirVencedor(1, estado1, codigoDaCarta1, nomeDaCidade1,"PIB per Capita", pib_PerCapita1, pib_PerCapita2);
            else if(pib_PerCapita1 < pib_PerCapita2)
                exibirVencedor(2, estado2, codigoDaCarta2, nomeDaCidade2,"PIB per Capita", pib_PerCapita1, pib_PerCapita2);
            else
                printf("PIB per Capita: Houve um empate!\n");
            break;

        case 4:
            if(numeroPontosTuristicos1 > numeroPontosTuristicos2)
                exibirVencedor(1, estado1, codigoDaCarta1, nomeDaCidade1,"Nº de Pontos Turísticos", numeroPontosTuristicos1, numeroPontosTuristicos2);
            else if(numeroPontosTuristicos1 < numeroPontosTuristicos2)
                exibirVencedor(2, estado2, codigoDaCarta2, nomeDaCidade2,"Nº de Pontos Turísticos", numeroPontosTuristicos1, numeroPontosTuristicos2);
            else
                printf("Pontos Turísticos: Houve um empate!\n");
            break;

        case 5:
            if(densidadePopulacional1 < densidadePopulacional2)
                exibirVencedor(1, estado1, codigoDaCarta1, nomeDaCidade1,"Densidade Populacional", densidadePopulacional1, densidadePopulacional2);
            else if(densidadePopulacional1 > densidadePopulacional2)
                exibirVencedor(2, estado2, codigoDaCarta2, nomeDaCidade2,"Densidade Populacional", densidadePopulacional1, densidadePopulacional2);
            else
                printf("Densidade Populacional: Houve um empate!\n");
            break;

        case 6:
            if(superPoder1 > superPoder2)
                exibirVencedor(1, estado1, codigoDaCarta1, nomeDaCidade1,"Super Poder", superPoder1, superPoder2);
            else if(superPoder1 < superPoder2)
                exibirVencedor(2, estado2, codigoDaCarta2, nomeDaCidade2,"Super Poder", superPoder1, superPoder2);
            else
                printf("Super Poder: Houve um empate!\n\n");
            break;

        default:
            printf("Opção inválida! Selecione apenas uma das seis opções acima.\n\n");
            break;
    }

    return 0;
}

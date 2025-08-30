#include <stdio.h>

// === VARIÁVEIS GLOBAIS ===

// Variáveis da primeira carta
char estado1, 
     codigoDaCarta1[10], 
     nomeDaCidade1[30];
unsigned long populacao1;
int numeroPontosTuristicos1;
float areaKm2_1, 
      pib1, 
      densidadePopulacional1, 
      pib_PerCapita1, 
      superPoder1;

// Variáveis da segunda carta
char estado2, 
     codigoDaCarta2[10],
     nomeDaCidade2[30];
unsigned long populacao2;
int numeroPontosTuristicos2;
float areaKm2_2, 
      pib2, 
      densidadePopulacional2, 
      pib_PerCapita2, 
      superPoder2;

// Atributos de competição
int opcao1, 
    opcao2;
float somatorioDisputaFinalCarta1,
      somatorioDisputaFinalCarta2;

// === FUNÇÃO PARA EXIBIR O VENCEDOR ===
void exibirVencedor(
    int numeroCarta,
    char estado,
    char cidade[],
    char atributo[],
    float valor1,
    float valor2
){
    printf("\nAtributo utilizado: %s\n", atributo);
    if(valor1 != valor2){
        printf("Carta vencedora: Carta %d\n", numeroCarta);
        printf("Cidade vencedora: %s\n", cidade);
    } else{
        printf("Houve um empate!\n");
    }
    printf("Valores comparados: Carta 1 = %.2f | Carta 2 = %.2f\n", valor1, valor2);
}

// === FUNÇÃO PARA EXIBIR OPÇÕES DE ATRIBUTOS ===
void exibirOpcoes(int opcaoEscolhida){
    if(opcaoEscolhida != 1) printf("1 - População\n");
    if(opcaoEscolhida != 2) printf("2 - Área\n");
    if(opcaoEscolhida != 3) printf("3 - PIB per Capita\n");
    if(opcaoEscolhida != 4) printf("4 - Nº de Pontos Turísticos\n");
    if(opcaoEscolhida != 5) printf("5 - Densidade Populacional\n");
    if(opcaoEscolhida != 6) printf("6 - Super Poder\n");
}

// === FUNÇÃO PARA ESCOLHA DE ATRIBUTOS ===
void selecaoAtributos(int *opcao1, int *opcao2){
    printf("\nEscolha a primeira opção:\n\n");
    do{
        exibirOpcoes(0);
        scanf("%d", opcao1);
        if(*opcao1 < 1 || *opcao1 > 6){
            printf("\nVocê precisa escolher entre 1 e 6! Tente novamente.\n\n");
        }
    } while(*opcao1 < 1 || *opcao1 > 6);
    do {
        printf("\nEscolha a segunda opção (não pode ser igual à primeira):\n\n");
        exibirOpcoes(*opcao1);
        scanf("%d", opcao2);
        if(*opcao2 == *opcao1 || *opcao2 < 1 || *opcao2 > 6){
            printf("\nOpção inválida! Tente novamente.\n\n");
        }
    } while(*opcao2 == *opcao1 || *opcao2 < 1 || *opcao2 > 6);
}

// === FUNÇÃO PARA COMPARAR ATRIBUTOS E EXIBIR VENCEDOR ===
void comparandoAtributosDisputas(int opcao){
    switch(opcao){
        case 1: // População
            somatorioDisputaFinalCarta1 += populacao1;
            somatorioDisputaFinalCarta2 += populacao2;
            if(populacao1 > populacao2)
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "População", 
                    populacao1, 
                    populacao2
                );
            else if(populacao1 < populacao2)
                exibirVencedor(
                    2, 
                    estado2, 
                    nomeDaCidade2, 
                    "População", 
                    populacao1, 
                    populacao2
                );
            else
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "População", 
                    populacao1, 
                    populacao2
                );
            break;
        case 2: // Área
            somatorioDisputaFinalCarta1 += areaKm2_1;
            somatorioDisputaFinalCarta2 += areaKm2_2;
            if(areaKm2_1 > areaKm2_2)
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "Área", 
                    areaKm2_1, 
                    areaKm2_2
                );
            else if(areaKm2_1 < areaKm2_2)
                exibirVencedor(
                    2, 
                    estado2, 
                    nomeDaCidade2, 
                    "Área", 
                    areaKm2_1, 
                    areaKm2_2
                );
            else
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "Área", 
                    areaKm2_1, 
                    areaKm2_2
                );
            break;
        case 3: // PIB per Capita
            somatorioDisputaFinalCarta1 += pib_PerCapita1;
            somatorioDisputaFinalCarta2 += pib_PerCapita2;
            if(pib_PerCapita1 > pib_PerCapita2)
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "PIB per Capita", 
                    pib_PerCapita1, 
                    pib_PerCapita2
                );
            else if(pib_PerCapita1 < pib_PerCapita2)
                exibirVencedor(
                    2, 
                    estado2, 
                    nomeDaCidade2, 
                    "PIB per Capita", 
                    pib_PerCapita1, 
                    pib_PerCapita2
                );
            else
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "PIB per Capita", 
                    pib_PerCapita1, 
                    pib_PerCapita2
                );
            break;
        case 4: // Nº de Pontos Turísticos
            somatorioDisputaFinalCarta1 += numeroPontosTuristicos1;
            somatorioDisputaFinalCarta2 += numeroPontosTuristicos2;
            if(numeroPontosTuristicos1 > numeroPontosTuristicos2)
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "Nº de Pontos Turísticos", 
                    numeroPontosTuristicos1, 
                    numeroPontosTuristicos2
                );
            else if(numeroPontosTuristicos1 < numeroPontosTuristicos2)
                exibirVencedor(
                    2, 
                    estado2, 
                    nomeDaCidade2, 
                    "Nº de Pontos Turísticos", 
                    numeroPontosTuristicos1, 
                    numeroPontosTuristicos2
                );
            else
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "Nº de Pontos Turísticos", 
                    numeroPontosTuristicos1, 
                    numeroPontosTuristicos2
                );
            break;
       case 5: // Densidade Populacional
            somatorioDisputaFinalCarta1 += densidadePopulacional1;
            somatorioDisputaFinalCarta2 += densidadePopulacional2;
            if(densidadePopulacional1 > densidadePopulacional2)
                exibirVencedor(
                    2, 
                    estado1, 
                    nomeDaCidade1, 
                    "Densidade Populacional", 
                    densidadePopulacional1, 
                    densidadePopulacional2
                );
            else if(densidadePopulacional1 < densidadePopulacional2)
                exibirVencedor(
                    1, 
                    estado2, 
                    nomeDaCidade2, 
                    "Densidade Populacional", 
                    densidadePopulacional1, 
                    densidadePopulacional2
                );
            else
                exibirVencedor(
                    2, 
                    estado1, 
                    nomeDaCidade1, 
                    "Densidade Populacional", 
                    densidadePopulacional1, 
                    densidadePopulacional2
                );
            break;
        case 6: // Super Poder
            somatorioDisputaFinalCarta1 += superPoder1;
            somatorioDisputaFinalCarta2 += superPoder2;
            if(superPoder1 > superPoder2)
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "Super Poder", 
                    superPoder1, 
                    superPoder2
                );
            else if(superPoder1 < superPoder2)
                exibirVencedor(
                    2, 
                    estado2, 
                    nomeDaCidade2, 
                    "Super Poder", 
                    superPoder1, 
                    superPoder2
                );
            else
                exibirVencedor(
                    1, 
                    estado1, 
                    nomeDaCidade1, 
                    "Super Poder", 
                    superPoder1, 
                    superPoder2
                );
            break;
    }
}

// === FUNÇÃO PRINCIPAL ===
int main(){
    // CADASTRO DA PRIMEIRA CARTA
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

    // CADASTRO DA SEGUNDA CARTA
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

    // CALCULANDO ATRIBUTOS DERIVADOS
    densidadePopulacional1 = populacao1 / areaKm2_1;
    densidadePopulacional2 = populacao2 / areaKm2_2;

    pib_PerCapita1 = pib1 / populacao1;
    pib_PerCapita2 = pib2 / populacao2;

    superPoder1 = populacao1 + areaKm2_1 + pib1 + numeroPontosTuristicos1 + pib_PerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = populacao2 + areaKm2_2 + pib2 + numeroPontosTuristicos2 + pib_PerCapita2 + (1.0 / densidadePopulacional2);

    // ESCOLHA DOS ATRIBUTOS
    printf("\nEscolha dois atributos para competir:\n");
    selecaoAtributos(&opcao1, &opcao2);

    // COMPARAÇÃO
    printf("\n ====== Comparando individualmente a disputa entre os atributos selecionados ====== \n");
    comparandoAtributosDisputas(opcao1);
    comparandoAtributosDisputas(opcao2);
    printf("\n\n ====== Comparando pela soma dos valores de cada atributo selecionado na disputa ====== \n");
    if(somatorioDisputaFinalCarta1 > somatorioDisputaFinalCarta2){
        printf("\nO vencedor da rodada foi a Carta1!\n\n");
        printf("Soma total Carta 1: %.2f\n", somatorioDisputaFinalCarta1);
        printf("Soma total Carta 2: %.2f\n", somatorioDisputaFinalCarta2);
    } else if(somatorioDisputaFinalCarta1 < somatorioDisputaFinalCarta2){
        printf("\nO vencedor da rodada foi a Carta2!\n\n");
        printf("Soma total Carta 2: %.2f\n", somatorioDisputaFinalCarta2);
        printf("Soma total Carta 1: %.2f\n", somatorioDisputaFinalCarta1);
    } else{
        printf("\nHouve um empate entre a Carta1 e a Carta2!\n\n");
        printf("Soma total Carta 2: %.2f\n", somatorioDisputaFinalCarta2);
        printf("Soma total Carta 1: %.2f\n", somatorioDisputaFinalCarta1);
    }
    printf("\n");
    return 0;
}